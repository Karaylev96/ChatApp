#include "server.h"
#include "database.h"
#include <QString>
#include <QRegExp>
#include <QSqlQueryModel>
#include <QSqlRecord>
#include <QSqlQuery>

/****************************************************************************************************************************/
Server::Server(QObject* parent) : QObject(parent) , m_db() {
    server = new QTcpServer(this); //suzdava server
    connect(server, SIGNAL(newConnection()),//newCon emit whe something is connected
            this,   SLOT(onNewConnection()));//declareted in the bottom

    if (!server->listen(QHostAddress::Any, PORT)) {
        qDebug() << "Server is not started.";
    } else {
        qDebug() << "Server is started.";
    }

}
/****************************************************************************************************************************/
//update user list
void Server::sendUserList() {
    QString line = "/users:" + clients.values().join(',') + "\n";
    sendToAll(line);
}
/****************************************************************************************************************************/
//send msg in chat
void Server::sendToAll(const QString& msg) {
    foreach (QTcpSocket* socket, clients.keys()) {
        socket->write(msg.toUtf8());
    }
}
/****************************************************************************************************************************/
void Server::newRegistration()

{
    QTcpSocket* socket = server->nextPendingConnection();
    qDebug() << "Client connected: " << socket->peerAddress().toString();
}
/****************************************************************************************************************************/
//slot when new client con to server
void Server::onNewConnection() {
    QTcpSocket* socket = server->nextPendingConnection();
    qDebug() << "Client connected: " << socket->peerAddress().toString();

    connect(socket, SIGNAL(readyRead()), this, SLOT(onReadyRead()));
    connect(socket, SIGNAL(disconnected()), this, SLOT(onDisconnect()));


    clients.insert(socket, "");
}
/****************************************************************************************************************************/
//slot when client exit
void Server::onDisconnect() {
    QTcpSocket* socket = (QTcpSocket*)sender();//pionter to socket
    qDebug() << "Client disconnected: " << socket->peerAddress().toString();

    QString username = clients.value(socket);
    sendToAll(QString("/system:" + username + " has left the chat.\n"));
    clients.remove(socket);
    sendUserList();
}
/************************************************************************************************************************/
//accept data from client
void Server::onReadyRead() {
    QRegExp loginRex("^/login:(.*)$");
    QRegExp registerRex("^/register:(.*)$");
    QRegExp messageRex("^/say:(.*)$");

    QTcpSocket* socket = (QTcpSocket*)sender();

    while (socket->canReadLine()) {
        QString line = QString::fromUtf8(socket->readLine()).trimmed();

//        if (loginRex.indexIn(line) != -1) {//indexin
//            QString user = loginRex.cap(1);//username
//            clients[socket] = user;//pazene v map pri logvane
//            sendToAll(QString("/system:" + user + " has joined the chat.\n"));//def-izprashta do vsichki
//            sendUserList();//def-vrushta spisuk s potrebiteli
//            qDebug() << user << "logged in.";


//            QSqlQuery query("SELECT * FROM User");
//                auto qUser = query.record().indexOf("username");
//                while (query.next()) {
//                    auto username = query.value(qUser).toString();
//                   qDebug()<< username;
//                }


    if (loginRex.indexIn(line) != -1) {
        QString user = loginRex.cap(1);

        if(m_db.findUser(user))
        {
            clients[socket] = user;//pazene v map pri logvane
            sendToAll(QString("/system:" + user + " has joined the chat.\n"));//def-izprashta do vsichki
            sendUserList();//def-vrushta spisuk s potrebiteli
            qDebug() << user << "logged in.";
        }
        else
        {
            QString falseLogin(QString("/falseLogin:" + user + "\n"));
            sendToAll(falseLogin.toUtf8()); //TODO : send it to the specific usere
            qDebug() << user << "еlse.";
        }

    }
    else if (messageRex.indexIn(line) != -1)
    {
        QString user = clients.value(socket);
        QString msg = messageRex.cap(1);//search cap() example
        sendToAll(QString(user + ":" + msg + "\n"));//return text for index
        qDebug() << "Message:" << msg;

    }
    else if (registerRex.indexIn(line) != -1){
        QString userReg = registerRex.cap(1);
        m_db.addToDataBase(userReg, socket->peerAddress().toString());
        qDebug() << userReg;
    }
    //errror msg
    else {
        qDebug() << "Bad message from " << socket->peerAddress().toString();
    }
    }
}

