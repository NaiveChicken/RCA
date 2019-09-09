#ifndef TRANSCEIVER_H
#define TRANSCEIVER_H

#include <QObject>

class Transceiver {

public:
    Transceiver();

public slots:
    int onSend();
};

#endif // TRANSCEIVER_H
