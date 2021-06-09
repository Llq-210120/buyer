#ifndef GLOBAL_H
#define GLOBAL_H

#include "buyerinfo.h"
#include "sellerinfo.h"
#include "storeinfo.h"
#include "bookinfo.h"
#include "shoppingcart.h"
#include <QList>
enum COMMAND{
    ///通用请求命令
    CMD_UserLogin_L = 'L',          //用户登录
    CMD_UserInfo_I = 'I',           //获取个人信息
    CMD_ChangePswd_H = 'H',         //修改密码
    CMD_UserChangeInfo_X = 'X',     //用户修改信息
    CMD_UserRegister_R = 'R',       //注册用户
    CMD_SellerCreate_C = 'C',       //创建书店

    CMD_BookLoad_B = 'B',           //书籍加载
    CMD_BookLoadSpecific_S = 'S',   //发送特定的书籍信息
    CMD_BookManyImages_M = 'M',    //发送批量书籍图像

    CMD_ShoppingCartAdd_A = 'A',    //添加购物车项
    CMD_ShoppingCartInit_T = 'T' ,   //初始化购物车

    CMD_Uploadbooks_U = 'U',         //上传书籍


};

class Global
{
public:
    static BuyerInfo m_buyerInfo_g;    //全局顾客类
    static SellerInfo m_sellerInfo_g;  //全局店长类
    static StoreInfo m_storeInfo_g;    //全局商店类
    static BookInfo m_bookInfo_g;      //全局书籍类

    static shoppingCartList m_shoppingCartInfoList_g; //全局购物车List
    static bookInfoList m_bookInfoList_g;
    static BookInfoQueue m_bookInfoQueue_g;
    static Map_Id_BookName m_bookMap_g;

};



#endif // GLOBAL_H
