#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include <QKeyEvent>
#include <thread>
#include <queue>
#include "messenger.h"
#include "crdt.h"
#include "vvector.h"

class Controller : public QObject {
    Q_OBJECT

public :
    Controller();
    Controller(int port);
    ~Controller();

private :
    std::thread mainThread;
    bool isThreadRunning;
    void mainControl();

    Messenger *msgr;
    void broadcastCommand(CRDT command);
    void updateView();

    void processKeyPress();
    void processMessage();

    void renderContent();

    std::string content;
    std::queue<CRDT> keyPressQ;
    std::queue<CRDT> deleteBuffer;
    std::vector<CRDT> crdtVector;
    Vvector version;

    int cursorPosition;

    void operationDelete();
    void operationInsert(CRDT keypress);
    void moveCursor(CRDT keypress);

signals :
    void updateContent(QString content);
    void updateCursor(int position);

public slots :
    void appendKeyPressedQ(CRDT data, int cursorPosition);
    void addPeer(std::string address, int port);

//helper functions
private:
    int getCRDTIndex(CRDT data);
    int getCRDTInsertIndex(CRDT data);
    double getCRDTPosition(int idx);

    double getKeyPressDeletePosition(CRDT data);
    double getKeyPressInsertPosition(CRDT data);

};

#endif // CONTROLLER_H
