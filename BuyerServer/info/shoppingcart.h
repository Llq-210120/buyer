#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <QString>
#include <QImage>
class ShoppingCart
{
public:
    ShoppingCart();
    ShoppingCart(const QString &buyerId,const QString &bookId,const QString &price,
                 const QString &number,const QString & time);
    ShoppingCart(const QString &buyerId,const QString &bookId,const QString &price,
                 const QString &number,const QString & time,const QString &condition);
    ShoppingCart(const QString &buyerId,const QString &bookId,const QString &price,
                 const QString &number,const QString & time,const QImage &image);

    const QString &getBuyerId() const;
    const QString &getBookId() const;
    const QString &getPrice() const;
    const QString &getNumber() const;
    const QString &getTime() const;
    const QString &getCondition() const;
    const QImage &getImage() const;


    void setBuyerId(const QString &buyerId);
    void setBookId(const QString &bookId);
    void setPrice(const QString &price);
    void setNumber(const QString &number);
    void setTime(const QString &time);
    void setCondition(const QString &condition);
    void setImage(const QImage &image);
private:

    QString m_buyerId;
    QString m_bookId;
    QString m_price;
    QString m_number;
    QString m_time;
    QString m_condition;
    QImage m_image;
};
typedef QList<ShoppingCart> shoppingCartInfoList;
#endif // SHOPPINGCART_H
