#include "msgserver.h"
#include "msgsocket.h"

MsgServer::MsgServer(QObject *parent) : QObject(parent)
{
    m_tcpServer = new QTcpServer(this);
    connect(m_tcpServer, &QTcpServer::newConnection,
            this, &MsgServer::slotNewConnection);


    m_tcpServer->listen(QHostAddress::Any, 9999);


}

void MsgServer::slotNewConnection(){

    qDebug() << "MsgServer::slotNewConnection()" ;

    QTcpSocket *socket = m_tcpServer->nextPendingConnection();

    MsgSocket *msgSocket = new MsgSocket(socket);

    connect(socket,&QTcpSocket::disconnected,socket,&QTcpSocket::deleteLater);

}
