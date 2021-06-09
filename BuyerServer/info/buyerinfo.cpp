#include "buyerinfo.h"
#include <QDebug>
BuyerInfo::BuyerInfo()
{

}
BuyerInfo::BuyerInfo(const QString &id, const QString &name, const QString &sex)
{
    m_id = id;
    m_name = name;
    m_sex = sex;
}

void BuyerInfo::display(void) const
{
    qDebug() << "m_id" <<  m_id;
    qDebug() << "m_name" << m_name;
}

void BuyerInfo::setID(const QString &id)
{
    m_id = id;
}
void BuyerInfo::setName(const QString &name)
{
    m_name = name;
}
void BuyerInfo::setSex(const QString &sex){
    m_sex = sex;
}



const QString &BuyerInfo::getID() const
{
    return m_id;
}
const QString &BuyerInfo::getName() const
{
    return m_name;
}
const QString &BuyerInfo::getSex() const{
    return m_sex;
}
