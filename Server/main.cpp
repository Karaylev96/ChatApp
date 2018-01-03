#include <QCoreApplication>
#include <QtCore>
#include <server.h>
#include <QDebug>
#include "database.h"


static const QString path = "C:/Users/Goro/Desktop/server-client/Chat-master/Server/db.db";

int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);
    Server server(NULL);


    return a.exec();
}
