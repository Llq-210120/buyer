#include "sellerinfo.h"
#include <QDebug>
SellerInfo::SellerInfo()
{

}
SellerInfo::SellerInfo(const QString &id, const QString &name, const QString &sex)
{
    m_id = id;
    m_name = name;
    m_sex = sex;
}

void SellerInfo::display(void) const
{
    qDebug() << "m_id" <<  m_id;
    qDebug() << "m_name" << m_name;
}

void SellerInfo::setID(const QString &id)
{
    m_id = id;
}
void SellerInfo::setName(const QString &name)
{
    m_name = name;
}
void SellerInfo::setSex(const QString &sex){
    m_sex = sex;
}

const QString &SellerInfo::getID() const
{
    return m_id;
}
const QString &SellerInfo::getName() const
{
    return m_name;
}
const QString &SellerInfo::getSex() const{
    return m_sex;
}
