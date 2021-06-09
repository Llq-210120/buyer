#include "bookinfo.h"
#include <QDebug>
BookInfo::BookInfo()
{

}
BookInfo::BookInfo(const  QString id, const QString storeId, const QString name, const QString author,
                   const QString type, const QString price, const QString description){
    m_id = id;
    m_storeId = storeId;
    m_name = name;
    m_author = author;
    m_type = type;
    m_price = price;
    m_description = description;
}
void BookInfo::display()const{

    qDebug() << "m_id" <<  m_id;
    qDebug() << "m_bookId" <<  m_storeId;
    qDebug() << "m_name" << m_name;
    qDebug() << "m_type" << m_type;


}
const QString &BookInfo::getId() const{
    return m_id;
}
const QString &BookInfo::getStoreId()const{
    return m_storeId;
}
const QString &BookInfo::getName()const{
    return m_name;
}
const QString &BookInfo::getAuthor()const{
    return m_author;
}
const QString &BookInfo::getTypde()const{
    return m_type;
}
const QString &BookInfo::getPrice()const{
    return m_price;
}
const QString &BookInfo::getDescription()const{
    return m_description;
}
const QImage &BookInfo::getBookImage()const{
    return m_bookImage;
}

void BookInfo::setid(const QString& id){
    m_id = id;
}
void BookInfo::setStoreId(const QString& storeId){
    m_storeId = storeId;
}
void BookInfo::setName(const QString& name){
    m_name = name;
}
void BookInfo::setAuthor(const QString& Author){
    m_author = Author;
}
void BookInfo::setType(const QString& type){
    m_type = type;
}
void BookInfo::setPrice(const QString &price){
    m_price = price;
}
void BookInfo::setDescription(const QString description){
    m_description = description;
}
void BookInfo::setBookImage(const QImage &bookImage){
    m_bookImage = bookImage;
}
