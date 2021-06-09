#ifndef MSGSOCKET_H
#define MSGSOCKET_H

#include <QObject>
#include <QTcpSocket>
#include <QTimer>
class MsgSocket : public QObject
{
    Q_OBJECT
public:
    explicit MsgSocket(QObject *parent = nullptr);

    void slotSendImage(const QImage &img);
    void socketConnectTo();
    void socketDisConnectTo();
signals:
    void userLoginResult(bool);
    void userRegisterResult(QString data);

public slots:

    void slotReadyRead();
    void slotSendMsg(QString msg);
    void readSpecificBookImage();
private:
    quint16 m_tcpBlockSize;
    QTcpSocket *m_tcpSocket;
    QByteArray arry;
    QTimer timer;
    void parseUserAsk(QString msg);

    void paresUserLogin(QString data);
    void paresChangePswd(QString data);
    void parseUserRegisterAsk(QString data);
    void parseSellerCreate(QString data);

    void pareBookLoad(QString data);

    void parsesBookLoadSpecificAsk(QString data);

    void parsesBookLoadManySend(QString id);
    void parsesBookLoadManyAsk(QString data);

    void parseShoppingCartInitRev(QString data);
    void parseUploadbooks(QString data);


};

#endif // MSGSOCKET_H
