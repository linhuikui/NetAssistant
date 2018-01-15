#ifndef NETWORKPARSE_H
#define NETWORKPARSE_H

#include <QObject>
#include <QHostAddress>

class NetWorkParse : public QObject
{
    Q_OBJECT
public:
    explicit NetWorkParse(QObject *parent = nullptr);
    void makeConnect(void);

private:
    int curNetType; //0:tcp 1:udp 2:sctp
    bool isServer;
    QList<QHostAddress> address;

signals:

public slots:
};

#endif // NETWORKPARSE_H
