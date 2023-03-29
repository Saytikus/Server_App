#ifndef COMBINER_H
#define COMBINER_H

#include <QObject>

#include "QUdpServer.h"
#include "Interface.h"
#include "AppDataBase.h"
#include "DataBaseWindow.h"
#include "ClientBufferPool.h"
#include "DataHandlerThreadPool.h"

class Combiner : public QObject {
    Q_OBJECT
public:
    explicit Combiner(QObject *parent = nullptr);
    void Combine();

    QUdpServer *server_;
    Interface *interface_;
    AppDataBase *app_db_;
    DataBaseWindow *db_win_;
    ClientBufferPool *buf_pool_;
    DataHandler *connect_handler_;
    DataHandlerThreadPool *handler_thread_pool_;
signals:

};

#endif // COMBINER_H
