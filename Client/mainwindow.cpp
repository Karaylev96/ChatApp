#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRegExp>
#include <QMessageBox>
#include <QListWidgetItem>
#include <QPixmap>
#include <QAbstractButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->mainFrame);
    connect(ui->leServer, SIGNAL(returnPressed()), this, SLOT(on_pbLogin_clicked()));
    connect(ui->leName, SIGNAL(returnPressed()), this, SLOT(on_pbLogin_clicked()));
    connect(ui->leMessage, SIGNAL(returnPressed()), this, SLOT(on_pbSend_clicked()));
    connect(ui->regButton,SIGNAL(clicked(bool)),this,SLOT(registration()));

    QRegExp regex("^[a-zA-Z]\\w+");
    ui->leName->setValidator(new QRegExpValidator(regex, this));
    ui->registrLabel->setValidator(new QRegExpValidator(regex, this));

    socket = new QTcpSocket(this);
    //connect(socket, SIGNAL(connected()), this, SLOT(onConnected()));
    connect(ui->pbLogin, SIGNAL(clicked(bool)), this, SLOT(onConnected()));
    connect(socket, SIGNAL(readyRead()), this, SLOT(onReadyRead()));
    connect(socket, SIGNAL(disconnected()), this, SLOT(onDisconnected()));

    QPixmap pic("C:/Users/Goro/Desktop/Chat-master/client/3019382.jpg");
    ui->luxoft->setPixmap(pic);

}
/****************************************************************************************/
MainWindow::~MainWindow() {
    delete ui;

}
/****************************************************************************************/
void MainWindow::on_pbLogin_clicked() {

    QString serverName = ui->leServer->text().trimmed();
    if (serverName.isEmpty()) {
        QMessageBox::information(NULL, "Warning",
                                 "Enter the server name or address.",
                                 QMessageBox::Ok);
        return;
    }


    QString userName = ui->leName->text().trimmed();
    if (userName.isEmpty()) {
        QMessageBox::information(NULL, "Warning",
                                 "Enter your nickname.",
                                 QMessageBox::Ok);
        return;
    }

    socket->connectToHost(serverName, PORT);
}
/****************************************************************************************/
void MainWindow::on_pbSend_clicked() {
    QString message = ui->leMessage->text().trimmed();
    if (message[0]=='/'){
        ui->teChat->append("<p color=\"green\">" + message + "</p>\n");
    }
    if (!message.isEmpty()) {
        socket->write(QString("/say:" + message + "\n").toUtf8());
        //ui->teChat->append(message);
        ui->leMessage->clear();
        ui->leMessage->setFocus();

    }
}
/****************************************************************************************/
void MainWindow::registration()
{
    QString plus("/register:");
    QString username = ui->registrLabel->text().trimmed();
    auto newvar=plus+username + "\n";
    socket->connectToHost(QString(ui->leServer->text().trimmed()), PORT);
    socket->write(newvar.toUtf8());
    qDebug()<<plus+username;
}

/****************************************************************************************/

void MainWindow::onReadyRead() {
    QRegExp usersRex("^/users:(.*)$");
    QRegExp systemRex("^/system:(.*)$");
    QRegExp messageRex("^(.*):(.*)$");
    QRegExp falseLogin("^/falseLogin:(.*)$");
    QRegExp privateMessage("^/private:(.*)$");

    while (socket->canReadLine()) {
        QString line = QString::fromUtf8(socket->readLine()).trimmed();

        if (usersRex.indexIn(line) != -1) {
                       QStringList users = usersRex.cap(1).split(",");
                        ui->lwUsers->clear();
                        foreach (QString user, users){
                           new QListWidgetItem(QIcon(":/user.png"), user, ui->lwUsers);
                        }
        }

        else if (systemRex.indexIn(line) != -1) {
            QString msg = systemRex.cap(1);
            ui->teChat->append("<p color=\"gray\">" + msg + "</p>\n");
        }
        else if (falseLogin.indexIn(line) != -1)
        {
            if(falseLogin.cap(1) == ui->leName->text())
            {
            QMessageBox::warning(this, "Warning",
                                 "Username is wrong! You should be registred first", QMessageBox::Ok);

            ui->stackedWidget->setCurrentWidget(ui->loginPage);
            //exit(1);

            }
        }
        else if (messageRex.indexIn(line) != -1) {
            QString user = messageRex.cap(1);
            QString message = messageRex.cap(2);
            ui->teChat->append("<p><b>" + user + "</b>: " + message + "</p>\n");
        }
        else if (privateMessage.indexIn(line) != -1){
            QString message = messageRex.cap(1);
            ui->teChat->append(message);
        }

    }
}
/****************************************************************************************/
void MainWindow::onConnected() {
    ui->teChat->clear();

    ui->stackedWidget->setCurrentWidget(ui->chatPage);//otvarq noviq prozorets

    socket->write(QString("/login:" + ui->leName->text() + "\n").toUtf8());
    ui->leMessage->setFocus();

}
/****************************************************************************************/
void MainWindow::onDisconnected() {
    QMessageBox::warning(NULL, "Warning",
                         "You have been disconnected from the server", QMessageBox::Ok);
    ui->stackedWidget->setCurrentWidget(ui->loginPage);
}


/****************************************************************************************/

