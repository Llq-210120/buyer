#include "execsql.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QDebug>
#include <QList>
#include <QPixmap>
#include <QImage>
#include <QDebug>
#define cout qDebug() << "[" <<__FILE__ << ":" << __LINE__ << "]"
Execsql::Execsql()
{

}
void Execsql::selectAlluser()
{

      QSqlQuery query; ///为了执行sql语句
      QString sql("select *from user");
      qDebug() << query.exec(sql);
      if(query.exec(sql)) /// 验证sql语句的语法正确性
      {
          ///获取字段的索引----列的索引
          int id_idx = query.record().indexOf("id");
          int pswd_idx = query.record().indexOf("pswd");
          int role_idx = query.record().indexOf("role");
          int date_idx = query.record().indexOf("date");

          qDebug() << id_idx <<  "," << pswd_idx << ","
                   << role_idx << "," << date_idx;

            ///获取每一条记录的信息
      while (query.next())
       {

           QString id = query.value(id_idx).toString();
           QString pswd = query.value(pswd_idx).toString();
           QString role = query.value(role_idx).toString();
           QString date = query.value(date_idx).toString();
           qDebug() << id << "," << pswd << "," << role << "," <<date;

        }
      }
}


bool Execsql::selectOneUser(QString id){

    QSqlQuery query;
    QString  sql = QString("select * from user where id='%1' ").arg(id);

    if(query.exec(sql)){
        ///获取字段的索引----列的索引
        int id_idx = query.record().indexOf("id");
        int pswd_idx = query.record().indexOf("pswd");
        int role_idx = query.record().indexOf("role");
        int date_idx = query.record().indexOf("date");
        ///获取每一条记录的信息
        while (query.next())
        {

            QString id = query.value(id_idx).toString();
            QString pswd = query.value(pswd_idx).toString();
            QString role = query.value(role_idx).toString();
            QString date = query.value(date_idx).toString();

            if(id.isEmpty()){
                return true;
            }else {
                return false;
            }

        }
    }else {

        return false;

    }
}

userInfoList Execsql::selectAllUserInfo(){
    QList<UserInfo> UserInfoList;
    QSqlQuery query; ///为了执行sql语句
    QString sql("select *from user");

    if(query.exec(sql)) /// 验证sql语句的语法正确性
    {
        ///获取字段的索引----列的索引
        int id_idx = query.record().indexOf("id");
        int pswd_idx = query.record().indexOf("pswd");
        int role_idx = query.record().indexOf("role");
        int date_idx = query.record().indexOf("date");
        ///获取每一条记录的信息
    while (query.next())
     {

         QString id = query.value(id_idx).toString();
         QString pswd = query.value(pswd_idx).toString();
         QString role = query.value(role_idx).toString();
         QString date = query.value(date_idx).toString();
         UserInfo info(id,pswd,role,date);
         UserInfoList.append(info);
      }
    }

    return UserInfoList;

}
bool Execsql::addOneUser(UserInfo info){

    QSqlQuery query;
    QString  sql = QString("insert  into user  values('%1' , '%2' ,'%3' ,'%4') ")
            .arg(info.getID()).arg(info.getPswd()).arg(info.getRole()).arg(info.getDate());
    if(query.exec(sql)){
        return true;
    }else {
        return false;
    }

}
bool Execsql::updataOneuser(UserInfo info){

    QSqlQuery query;
    QString sql = QString("update user set pswd='%1' , role='%2' , date='%3'"
                          "where id='%4'")
                .arg(info.getPswd()).arg(info.getRole()).arg(info.getDate()).arg(info.getID());
    if(query.exec(sql)){
        return true;
    }else {
        return false;
    }

}
bool Execsql::updataUserpswd(QString id,QString pswd)         //更新密码
{

    QSqlQuery query;
    QString sql = QString("update user set pswd='%1' "
                          "where id='%2'")
                .arg(pswd).arg(id);
    if(query.exec(sql)){
        return true;
    }else {
        return false;
    }

}
buyerInfoList Execsql::selectAllBuyerInfo(){

    QList<BuyerInfo> BuyerInfoList;
    QSqlQuery query;
    QString  sql("select * from buyer");

    if(query.exec(sql)){

        int id_idx = query.record().indexOf("id");
        int name_idx = query.record().indexOf("name");
        int sex_idx = query.record().indexOf("sex");


        while(query.next()){

            QString id = query.value(id_idx).toString();
            QString name = query.value(name_idx).toString();
            QString sex = query.value(sex_idx).toString();

            BuyerInfo info(id,name,sex);
            BuyerInfoList.append(info);
        }
    }

    return BuyerInfoList;

}
BuyerInfo Execsql::selectOneBuyer(QString id){

    QSqlQuery query;
    QString sql = QString("select *from buyer where id='%1' ").arg(id);
    if(query.exec(sql)){
        int id_idx = query.record().indexOf("id");
        int name_idx = query.record().indexOf("name");
        int sex_idx = query.record().indexOf("sex");

        while(query.next()){

            QString id = query.value(id_idx).toString();
            QString name = query.value(name_idx).toString();
            QString sex = query.value(sex_idx).toString();

            BuyerInfo info(id,name,sex);
            return info;
        }

    }
    return BuyerInfo();

}
bool Execsql::addOneBuyer(BuyerInfo info){

    QSqlQuery query;
    QString  sql = QString("insert  into buyer  values('%1' , '%2' ,'%3') ")
            .arg(info.getID()).arg(info.getName()).arg(info.getSex());

    if(query.exec(sql)){
        return true;
    }else {
        return false;
    }

}
bool Execsql::updataOneBuyer(BuyerInfo info){
    QSqlQuery query;
    QString sql = QString("update buyer set name='%1' , sex='%2'"
                          "where id='%3' ")
                .arg(info.getName()).arg(info.getSex()).arg(info.getID());
    if(query.exec(sql)){
        return true;
    }else {
        return false;
    }

}
/////////////////////////////sellerInfo////////////////////////////////////
sellerInfoList Execsql::selectAllSellerInfo(){
    QList<SellerInfo> SellerInfoList;
    QSqlQuery query;
    QString sql("select * from seller");

    if(query.exec(sql)){

        int id_idx = query.record().indexOf("id");
        int name_idx = query.record().indexOf("name");
        int sex_idx = query.record().indexOf("sex");

        while(query.next()){
            QString id = query.value(id_idx).toString();
            QString name = query.value(name_idx).toString();
            QString sex = query.value(sex_idx).toString();

            SellerInfo info(id,name,sex);
            SellerInfoList.append(info);
        }

    }
    return SellerInfoList;

}

SellerInfo Execsql::selectOneSeller(QString id){

    QSqlQuery query;
    QString sql = QString("select *from seller where id='%1' ").arg(id);
    if(query.exec(sql)){
        int id_idx = query.record().indexOf("id");
        int name_idx = query.record().indexOf("name");
        int sex_idx = query.record().indexOf("sex");

        while(query.next()){

            QString id = query.value(id_idx).toString();
            QString name = query.value(name_idx).toString();
            QString sex = query.value(sex_idx).toString();

            SellerInfo info(id,name,sex);
            return info;
        }

    }
    return SellerInfo();

}
bool Execsql::addOneSeller(SellerInfo info){

    QSqlQuery query;
    QString  sql = QString("insert  into seller  values('%1' , '%2' ,'%3') ")
            .arg(info.getID()).arg(info.getName()).arg(info.getSex());

    if(query.exec(sql)){
        return true;
    }else {
        return false;
    }

}
bool Execsql::updataOneSeller(SellerInfo info){

    QSqlQuery query;
    QString sql = QString("update seller set name='%1' , sex='%2'"
                          "where id='%3' ")
                .arg(info.getName()).arg(info.getSex()).arg(info.getID());
    if(query.exec(sql)){
        return true;
    }else {
        return false;
    }
}
/////////////////////////////BookInfo//////////////////////////////////
bookInfoList Execsql::selectAllBookInfo(){

    QList<BookInfo> BookInfoList;
    QSqlQuery query;
    QString sql("select *from book");

    if(query.exec(sql)){
        int id_idx = query.record().indexOf("id");
        int store_id_idx = query.record().indexOf("store_id");
        int name_idx = query.record().indexOf("name");
        int author_idx = query.record().indexOf("author");
        int type_idx = query.record().indexOf("type");
        int price_idx = query.record().indexOf("price");
        int description_idx = query.record().indexOf("description");

        while (query.next()) {
            QString id = query.value(id_idx).toString();
            QString store_id = query.value(store_id_idx).toString();
            QString name = query.value(name_idx).toString();
            QString author = query.value(author_idx).toString();
            QString type = query.value(type_idx).toString();
            QString price = query.value(price_idx).toString();
            QString description = query.value(description_idx).toString();
            BookInfo info(id,store_id,name,author,type,price,description);

            BookInfoList.append(info);
        }

    }

     return BookInfoList;
}

BookInfo Execsql::selectOneBook(QString id){

    QSqlQuery query;
    QString sql = QString("select *from book where id='%1' ").arg(id);

    if(query.exec(sql)){
        int id_idx = query.record().indexOf("id");
        int store_id_idx = query.record().indexOf("store_id");
        int name_idx = query.record().indexOf("name");
        int author_idx = query.record().indexOf("author");
        int type_idx = query.record().indexOf("type");
        int price_idx = query.record().indexOf("price");
        int description_idx = query.record().indexOf("description");

        while (query.next()) {
            QString id = query.value(id_idx).toString();
            QString store_id = query.value(store_id_idx).toString();
            QString name = query.value(name_idx).toString();
            QString author = query.value(author_idx).toString();
            QString type = query.value(type_idx).toString();
            QString price = query.value(price_idx).toString();
            QString description = query.value(description_idx).toString();

            BookInfo info(id,store_id,name,author,type,price,description);
            return info;
        }

    }

    return BookInfo();
}

bookInfoList Execsql::selectSellerBookinfo(QString sellerId){

    bookInfoList list;
    QSqlQuery query;
    QString sql = QString("select *from book where store_id in "
                "(select id from store where seller_id='%1')").arg(sellerId);

    if(query.exec(sql)){
        int id_idx = query.record().indexOf("id");
        int store_id_idx = query.record().indexOf("store_id");
        int name_idx = query.record().indexOf("name");
        int author_idx = query.record().indexOf("author");
        int type_idx = query.record().indexOf("type");
        int price_idx = query.record().indexOf("price");
        int description_idx = query.record().indexOf("description");

        while (query.next()) {
            QString id = query.value(id_idx).toString();
            QString store_id = query.value(store_id_idx).toString();
            QString name = query.value(name_idx).toString();
            QString author = query.value(author_idx).toString();
            QString type = query.value(type_idx).toString();
            QString price = query.value(price_idx).toString();
            QString description = query.value(description_idx).toString();
            BookInfo info(id,store_id,name,author,type,price,description);

            list.append(info);
        }

    }

     return list;



}

bool Execsql::addOneBook(BookInfo info){

    QSqlQuery query;
    QString sql = QString("insert into book values('%1','%2','%3','%4','%5','%6','%7')")
            .arg(info.getId()).arg(info.getStoreId()).arg(info.getName())
            .arg(info.getAuthor()).arg(info.getTypde()).arg(info.getPrice())
            .arg(info.getDescription());
    if(query.exec(sql)){
        return true;
    }else {
        return false;
    }

}
bool Execsql::delOneBook(BookInfo info){
     QSqlQuery query;
     QString sql = QString("delete  from book where id='%1' and store_id='%2'")
             .arg(info.getId()).arg(info.getStoreId());
     if(query.exec(sql)){
         return true;
     }else {
         return false;
     }

}
bool Execsql::updataOneBook(BookInfo info){
    QSqlQuery query;
    QString sql = QString("update book set name='%1' , author='%2',type='%3', price='%4' ,description='%5'"
                          "where id='%6' and store_id='%7' ")
            .arg(info.getName())
            .arg(info.getAuthor()).arg(info.getTypde()).arg(info.getPrice())
            .arg(info.getDescription()).arg(info.getId()).arg(info.getStoreId());
    if(query.exec(sql)){
        return true;
    }else {
        return false;
    }

}
////////////////////////////StoreInfo/////////////////////////////////////////
storeInfoList Execsql::selectAllStoreInfo(){

    QList<StoreInfo> StoreInfoList;
    QSqlQuery query;
    QString sql("select * from store");

    if(query.exec(sql)){

        int id_idx = query.record().indexOf("id");
        int seller_id_idx = query.record().indexOf("seller_id");
        int name_id = query.record().indexOf("name");

        while(query.next()){
            QString id = query.value(id_idx).toString();
            QString seller_id = query.value(seller_id_idx).toString();
            QString name = query.value(name_id).toString();
            StoreInfo info(id,seller_id,name);
            StoreInfoList.append(info);

        }

    }
    return StoreInfoList;

}
bool Execsql::updataOneStore(StoreInfo info){

    QSqlQuery query;
    QString sql = QString("update store set name='%1'"
                          "where id='%2' and seller_id             = '%3'")
                .arg(info.getName()).arg(info.getId()).arg(info.getSellerId());
    if(query.exec(sql)){
        return true;
    }else {
        return false;
    }
}
///////////////////////////////login//////////////////////////////
bool Execsql::loginUser(QString name, QString pswd){

    QSqlQuery query;
    QString sql = QString("select * from user where id='%1' and pswd='%2'").arg(name).arg(pswd);
    qDebug() << query.exec(sql);
    if(query.exec(sql)) /// 验证sql语句的语法正确性
    {
        ///获取字段的索引----列的索引
        int id_idx = query.record().indexOf("id");
        int pswd_idx = query.record().indexOf("pswd");
        int role_idx = query.record().indexOf("role");
        int date_idx = query.record().indexOf("date");

        qDebug() << id_idx <<  "," << pswd_idx << ","
                 << role_idx << "," << date_idx;
          ///获取每一条记录的信息
         query.next();

         QString id = query.value(id_idx).toString();
         QString pswd = query.value(pswd_idx).toString();
         QString role = query.value(role_idx).toString();
         QString date = query.value(date_idx).toString();
         qDebug() << id << "," << pswd << "," << role << "," <<date;

         if(!role.isEmpty() && !date.isEmpty())
         return true;
    }

    return false;
}
bool Execsql::addOneStore(StoreInfo info){
     QSqlQuery query;
     QString sql  = QString("insert into store values ('%1','%2','%3')")
             .arg(info.getId()).arg(info.getSellerId()).arg(info.getName());
     if(query.exec(sql)){
         return true;
     }else {
         return false;
     }
}
StoreInfo Execsql::selectOneStoreInfo(QString sellerId){
    QSqlQuery query;
    QString sql = QString("select *from store where seller_id='%1' ").arg(sellerId);

    if(query.exec(sql)){

        int id_idx = query.record().indexOf("id");
        int seller_id_idx = query.record().indexOf("seller_id");
        int name_id = query.record().indexOf("name");

        while(query.next()){
            QString id = query.value(id_idx).toString();
            QString seller_id = query.value(seller_id_idx).toString();
            QString name = query.value(name_id).toString();
            StoreInfo info(id,seller_id,name);
            return info;
        }

    }

    return StoreInfo();
}

shoppingCartInfoList Execsql::selectOneShoppingList(QString id){
    shoppingCartInfoList list;

    QSqlQuery query;
    QString sql;
    bool flag = true;
    if(id[0] == 'B' && id[1] == 'Y')
    {
        sql = QString("select * from shopping_cart where buyer_id='%1' ").arg(id);


    }else if(id[0] == 'S' && id[1] == 'E'){

        sql = QString("select * from shopping_cart where book_id in"
                      "(select id from book where store_id in"
                      "(select id from store where seller_id ='%1'));").arg(id);
        flag = false;
    }

    if(query.exec(sql)){
        int buyer_id_idx = query.record().indexOf("buyer_id");
        int book_id_idx =  query.record().indexOf("book_id");
        int prices_idx = query.record().indexOf("prices");
        int number_idx = query.record().indexOf("number");
        int time_idx = query.record().indexOf("time");
        int condition_idx = query.record().indexOf("condition");
        while(query.next()){
            QString buyerId = query.value(buyer_id_idx).toString();
            QString bookId = query.value(book_id_idx).toString();
            QString prices = query.value(prices_idx).toString();
            QString number = query.value(number_idx).toString();
            QString time = query.value(time_idx).toString();
            QString condition = query.value(condition_idx).toString();
            if(flag == false && condition == "未提交") continue;
            ShoppingCart info(buyerId,bookId,prices,number,time,condition);
            list.append(info);
        }
    }
    return list;
}
ShoppingCart Execsql::selectOneShoppingCart(QString buyerId,QString bookId){

    QSqlQuery query;
    QString sql  = QString("select * from shopping_cart where buyer_id='%1' and book_id='%2'")
            .arg(buyerId).arg(bookId);

    if(query.exec(sql)){
        int buyer_id_idx = query.record().indexOf("buyer_id");
        int book_id_idx =  query.record().indexOf("book_id");
        int prices_idx = query.record().indexOf("prices");
        int number_idx = query.record().indexOf("prices");
        int time_idx = query.record().indexOf("time");
        int condition_idx = query.record().indexOf("condition");

        while(query.next()){
            QString buyerId = query.value(buyer_id_idx).toString();
            QString bookId = query.value(book_id_idx).toString();
            QString prices = query.value(prices_idx).toString();
            QString number = query.value(number_idx).toString();
            QString time = query.value(time_idx).toString();
            QString condition = query.value(condition_idx).toString();

            ShoppingCart info(buyerId,bookId,prices,number,time,condition);
            return info;
        }
    }
    return ShoppingCart();
}

bool Execsql::addOneShoppingCart(ShoppingCart info){

    ShoppingCart in = Execsql::selectOneShoppingCart(info.getBuyerId(),info.getBookId());
    QSqlQuery query;
    QString sql;
    if(in.getBookId() == QString("") ){
        sql  = QString("insert into shopping_cart values ('%1','%2','%3','%4','%5','%6')")
                .arg(info.getBuyerId()).arg(info.getBookId()).arg(info.getPrice())
                .arg(info.getNumber()).arg(info.getTime()).arg(info.getCondition());
    }
    else {

        sql  = QString("update shopping_cart set number='%1' "
                       "where buyer_id='%2' and book_id = '%3';")
               .arg(info.getNumber()).arg(info.getBuyerId()).arg(info.getBookId());

    }
    if(query.exec(sql)){

        return true;
    }else {
        return false;
    }


}

bool Execsql::delOneShoppingCart(ShoppingCart info){


    QSqlQuery query;

    QString sql  = QString("delete from shopping_cart where buyer_id = '%1' and book_id ='%2' ")
            .arg(info.getBuyerId()).arg(info.getBookId());

    if(query.exec(sql)){
        return true;
    }else {
        return false;
    }


}
bool Execsql::updataShoppingCart(ShoppingCart info){

    QSqlQuery query;

    QString sql = QString("update shopping_cart set number='%1', condition='%2'"
            " where buyer_id='%3' and book_id='%4'")
            .arg(info.getNumber()).arg(info.getCondition()).arg(info.getBuyerId()).arg(info.getBookId());

    if(query.exec(sql)){
        return true;
    }else {
        return false;
    }
}
