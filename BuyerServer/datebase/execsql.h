#ifndef EXECSQL_H
#define EXECSQL_H
#include <QString>

#include "userinfo.h"
#include "buyerinfo.h"
#include "sellerinfo.h"
#include "bookinfo.h"
#include "storeinfo.h"
#include "shoppingcart.h"

class Execsql
{
public:

    Execsql();
    static bool loginUser(QString name, QString pswd);  ///登录
    static void selectAlluser();                    ///userInfo
    static bool selectOneUser(QString id);          //通过id查找用户
    static userInfoList selectAllUserInfo();
    static bool addOneUser(UserInfo info);          //添加用户项
    static bool updataOneuser(UserInfo info);        //更新用户项
    static bool updataUserpswd(QString id, QString pswd);         //更新密码
////////////////////////////////////////////////////////buyerInfo
    static buyerInfoList selectAllBuyerInfo();
    static BuyerInfo selectOneBuyer(QString id);  //通过id查找顾客
    static bool addOneBuyer(BuyerInfo info);        //添加顾客项
    static bool updataOneBuyer(BuyerInfo info);     //更新顾客项

////////////////////////////////////////////////////////sellerInfo
    static sellerInfoList selectAllSellerInfo();
    static SellerInfo selectOneSeller(QString id);//通过id查找店长
    static bool addOneSeller(SellerInfo info);      //添加店长项
    static bool updataOneSeller(SellerInfo info);     //更新店长项
////////////////////////////////////////////////////////bookInfo
    static bookInfoList selectAllBookInfo();
    static BookInfo selectOneBook(QString id);      //通过id查询书籍
    static bookInfoList selectSellerBookinfo(QString sellerId);//通过店长Id查找书籍
    static bool addOneBook(BookInfo info);          //添加书籍项
    static bool delOneBook(BookInfo info);          //删除书籍项
    static bool updataOneBook(BookInfo info);       //更新书籍项

////////////////////////////////////////////////////////storeInfo
    static storeInfoList selectAllStoreInfo();
    static bool addOneStore(StoreInfo info);        //添加商店项
    static StoreInfo selectOneStoreInfo(QString sellerId); //通过店长Id查询商店
    static bool updataOneStore(StoreInfo info);      //更新店铺项

///////////////////////////////////////////////////// shoppingCartinfo
    static shoppingCartInfoList selectOneShoppingList(QString id); //通过顾客id查找对应的购物车项
                                                                    //通过店长id查找对应的购物车项
    static ShoppingCart selectOneShoppingCart(QString buyerId,QString bookId);
    static bool addOneShoppingCart(ShoppingCart info);   //添加购物车项
    static bool delOneShoppingCart(ShoppingCart info);   //删除购物车项
    static bool updataShoppingCart(ShoppingCart info);   //更新购物车项

};

#endif // EXECSQL_H
