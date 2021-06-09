#ifndef BUYERINFO_H
#define BUYERINFO_H

#include <QString>
class BuyerInfo
{
public:
    BuyerInfo();

    BuyerInfo(const QString &id, const QString &name,const QString &sex);

    void display(void) const;

    void setID(const QString &id);
    void setName(const QString &name);
    void setSex(const QString &sex);

    const QString &getID() const;
    const QString &getName() const;
    const QString &getSex() const;


private:
    QString m_id;
    QString m_name;
    QString m_sex;
};

typedef QList<BuyerInfo> buyerInfoList;
#endif // BUYERINFO_H
