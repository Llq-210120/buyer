#include "datebase.h"
#include <QSqlDatabase>
#include <QSqlError>

bool Datebase::createConnection()
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/llq/Desktop/buyer/BuyerServer/datebase/buyer.db");

    if(!db.open()){
        qCritical("Can't open database: %s(%s)",
                  db.lastError().text().toLocal8Bit().data(),
                  qt_error_string().toLocal8Bit().data());

        return false;
    }
    return true;
}
void Datebase::closeConnection()
{
    QSqlDatabase::database().close();
}
