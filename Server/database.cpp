#include "database.h"
#include "QHostAddress"

Database::Database()
{

   QSqlDatabase m_db = QSqlDatabase::addDatabase("QSQLITE");
   m_db.setDatabaseName("C:/Users/Goro/Desktop/server-client/Chat-master/Server/db.db");

   if (!m_db.open())
   {
      qDebug() << "Error: connection with database failed";
   }
   else
   {
      qDebug() << "Database: connection ok";
   }

}

bool Database::findUser(const QString &user)
{
     QSqlQuery query("SELECT * FROM User");

     while (query.next())
     {
         auto qUser = query.record().indexOf("username");
         auto username = query.value(qUser).toString();


         if(username==user)
         {
             return true;
         }
     }
     return false;
}

void Database::addToDataBase(const QString& user,const QString& ipAdres)
{
    auto query = new QSqlQuery(m_db);

//    query->exec(QString("INSERT INTO User (username) VALUES ('" + user + "')"));
//    query->exec(QString("INSERT INTO User (ip) VALUES ('" + ipAdres + "')"));
    query->exec(QString("INSERT INTO User (username,ip) VALUES ('" + user + "' ,'" + ipAdres + "')"));
}




