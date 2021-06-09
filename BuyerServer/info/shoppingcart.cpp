#include "shoppingcart.h"

ShoppingCart::ShoppingCart()
{

}

ShoppingCart::ShoppingCart(const QString &buyerId,const QString &bookId,const QString &price,
                           const QString &number,const QString & time)
{
    m_buyerId =  buyerId ;
    m_bookId =  bookId;
    m_price = price;
    m_number = number;
    m_time = time;

}
ShoppingCart::ShoppingCart(const QString &buyerId,const QString &bookId,const QString &price,
             const QString &number,const QString & time,const QString &condition)
{

    m_buyerId =  buyerId ;
    m_bookId =  bookId;
    m_price = price;
    m_number = number;
    m_condition = condition;
    m_time = time;

}
ShoppingCart::ShoppingCart(const QString &buyerId,const QString &bookId,const QString &price,
             const QString &number,const QString & time,const QImage &image)
{
    m_buyerId =  buyerId ;
    m_bookId =  bookId;
    m_price = price;
    m_number = number;
    m_time = time;
    m_image = image;
}

const QString &ShoppingCart::getBuyerId() const{
    return m_buyerId;
}
const QString &ShoppingCart::getBookId() const{
    return m_bookId;
}
const QString &ShoppingCart::getPrice() const{
    return m_price;
}
const QString &ShoppingCart::getNumber() const{
    return m_number;
}
const QString &ShoppingCart::getTime() const{
    return m_time;
}
const QString &ShoppingCart::getCondition() const{
    return m_condition;
}
const QImage &ShoppingCart::getImage() const{
    return m_image;
}

void ShoppingCart::setBuyerId(const QString &buyerId){
    m_buyerId = buyerId;
}
void ShoppingCart::setBookId(const QString &bookId){
    m_bookId = bookId;
}
void ShoppingCart::setPrice(const QString &price){
    m_price = price;
}
void ShoppingCart::setNumber(const QString &number){
    m_number = number;
}
void ShoppingCart::setTime(const QString &time){
    m_time = time;
}
void ShoppingCart::setCondition(const QString &condition){
    m_condition = condition;
}
void ShoppingCart::setImage(const QImage &image){
    m_image = image;
}
