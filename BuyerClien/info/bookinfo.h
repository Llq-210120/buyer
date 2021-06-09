#ifndef BOOKINFO_H
#define BOOKINFO_H

#include <QObject>
#include <QImage>
#include <QQueue>
#include <QMap>
class BookInfo
{
public:
    BookInfo();
    BookInfo(const  QString id,const QString storeId,const QString name,const QString author,
             const QString type,const QString price,const QString description);

    BookInfo(const  QString id, const QString storeId, const QString name, const QString author,
             const QString type);

    BookInfo(const BookInfo &other);

    void display()const;
    const QString &getId() const;
    const QString &getStoreId()const;
    const QString &getName()const;
    const QString &getAuthor()const;
    const QString &getTypde()const;
    const QString &getPrice()const;
    const QString &getDescription()const;
    const QImage &getBookImage()const;

    void setid(const QString& id);
    void setStoreId(const QString& storeId);
    void setName(const QString& name);
    void setAuthor(const QString&Author);
    void setType(const QString& type);
    void setPrice(const QString& price);
    void setDescription(const QString &description);
    void setBookImage(const QImage &bookImage);


private:
    QString m_id;
    QString m_storeId;
    QString m_name;
    QString m_author;
    QString m_type;
    QString m_price;
    QString m_description;
    QImage m_bookImage;
};

typedef QList<BookInfo> bookInfoList;
typedef QQueue<BookInfo> BookInfoQueue;
typedef QMap<QString,QString> Map_Id_BookName;
#endif // BOOKINFO_H
