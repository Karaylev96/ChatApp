#ifndef DATABASE_H
#define DATABASE_H
#include <stdio.h>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtSql/QSqlDatabase>
#include <QtDebug>
//#include <QtGui/QApplication>
#include <QtSql>
#include <QMessageLogger>
#include <QTcpSocket>

class Database
{
public:
    Database();
    QSqlDatabase addQry();
    bool findUser(const QString& user);
    void addToDataBase(const QString & user,const QString& ipAdres);
private:
    QSqlDatabase m_db;
    int rc;
};

#endif // DATABASE_H
