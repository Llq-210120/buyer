#include "mainwindow.h"
#include <QApplication>
#include "datebase.h"
#include<QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);



    Datebase sql;
    if(sql.createConnection())
    {
        qDebug() << "Success: connect DB!!";
    }
    MainWindow w;
    w.hide();


    int res = a.exec();
    
    
    sql.closeConnection();
    return res;


}
