#include "networkparse.h"
#include <QHostAddress>
#include <QTcpServer>
#include <QTcpSocket>
#include <QUdpSocket>
#include <QSctpServer>
#include <QSctpSocket>
#include <QNetworkInterface>
#include <QDebug>

NetWorkParse::NetWorkParse(QObject *parent) : QObject(parent)
{
    curNetType = 0;
    isServer = false;

    address = QNetworkInterface::allAddresses();

    qDebug() << "ip count:" << address.size() << endl;
    for(QList<QHostAddress>::iterator i = address.begin(); i != address.end(); i++){
        QHostAddress add = (*i);
        qDebug() << add.toString() << endl;
    }
}

void NetWorkParse::makeConnect()
{
    switch (curNetType) {
    case 1://udp

        break;
    case 2://sctp
        if(isServer){

        }else{

        }
        break;
    default://tcp
        if(isServer){

        }else{

        }
        break;
    }
}
