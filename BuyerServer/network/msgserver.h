#ifndef MSGSERVER_H
#define MSGSERVER_H

#include <QObject>
#include <QTcpServer>

class MsgServer : public QObject
{
    Q_OBJECT
public:
    explicit MsgServer(QObject *parent = nullptr);

signals:

public slots:
    void slotNewConnection();


private:
    QTcpServer *m_tcpServer;

};

#endif // MSGSERVER_H
