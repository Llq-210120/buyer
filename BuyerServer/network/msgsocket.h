#ifndef MSGSOCKET_H
#define MSGSOCKET_H

#include <QObject>
#include <QTcpSocket>
#include <QTimer>
#include <QByteArray>
class MsgSocket : public QObject
{
    Q_OBJECT
public:
    explicit MsgSocket(QTcpSocket *socket,QObject *parent = nullptr);
    ~MsgSocket();


    void paresUserLogin(QString data);
    void paresChangePswd(QString data);
    void paresUserChangeInfo(QString data);
    void parseUserRegisterAsk(QString data);
    void parseSellerCreateAsk(QString data);
    void readSpecificBookImage();
signals:

public slots:
    void slotRead();
    void slotSendMsg(QString msg);          ///发送数据函数
    void slotSendImage(QString bookName);   ///发送给图像数据函数


private:
    QTcpSocket *m_tcpSocket;
    quint16 m_tcpBlockSize;
    QTimer timer;
    QByteArray arry;

    void parseUserAsk(QString msg);

    void pareseBookLoadAsk(QString data);
    void parsesBookLoadSpecificAsk(QString data);

    void pareseBookManyAsk(QString id);
    void parseShoppingCartAddAsk(QString data);
    void parseShoppingCartInitAsk(QString data);
    void parseUploadbooksAsk(QString data);

};

#endif // MSGSOCKET_H
