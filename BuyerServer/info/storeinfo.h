#ifndef STOREINFO_H
#define STOREINFO_H
#include <QString>

class StoreInfo
{
public:
    StoreInfo();

    StoreInfo(const QString & id,const QString &seller_id, const QString &name);
    void display() const;

    const QString getId() const;
    const QString getSellerId()const ;
    const QString getName() const;

    void setId(const QString & id);
    void setSellerId(const QString & sellerId);
    void SetName(const QString name);

private:
    QString m_id;
    QString m_seller_id;
    QString m_name;
};
typedef QList<StoreInfo> storeInfoList;
#endif // STOREINFO_H
