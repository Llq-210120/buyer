#ifndef SELLERINFO_H
#define SELLERINFO_H

#include <QString>
class SellerInfo
{
public:
    SellerInfo();
    SellerInfo(const QString &id, const QString &name,const QString &sex);

    void display(void) const;

    void setID(const QString &id);
    void setName(const QString &name);
    void setSex(const QString &sex);

    const QString &getID() const;
    const QString &getName() const;
    const QString &getSex() const;

    void clear(void);

private:
    QString m_id;
    QString m_name;
    QString m_sex;
};

#endif // SELLERINFO_H
