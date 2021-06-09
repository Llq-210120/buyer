#include "storeinfo.h"
#include <QDebug>
#define cout qDebug() << "[" <<__FILE__ << ":" << __LINE__ << "]"
StoreInfo::StoreInfo()
{

}


StoreInfo::StoreInfo(const QString & id,const QString &seller_id, const QString &name){
    this->m_id = id;
    this->m_seller_id = seller_id;
    this->m_name = name;
}
void StoreInfo::display() const{
    cout  << "  id " << m_id ;
    cout  << "  seller_id " << m_seller_id ;
    cout  << "  name " << m_name ;

}

const QString StoreInfo::getId() const{
    return this->m_id;

}
const QString StoreInfo::getSellerId()const {
    return this->m_seller_id;
}
const QString StoreInfo::getName() const{
    return this->m_name;
}

void StoreInfo::setId(const QString & id){

    this->m_id = id;
}
void StoreInfo::setSellerId(const QString & sellerId){
    this->m_seller_id = sellerId;
}
void StoreInfo::SetName(const QString name){
    this->m_name = name;
}
