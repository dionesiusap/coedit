#ifndef MESSENGER_H
#define MESSENGER_H

#include <mutex>
#include <queue>
#include <vector>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <thread>
#include <netinet/in.h>

#include "crdt.h"

class Messenger {
private:
    std::thread senderThread;
    std::thread serverThread;

    int listenSocket;
    int sendSocket;

    bool isServerRunning;
    bool isSenderRunning;

    struct sockaddr_in servaddr;
    struct sockaddr_in cliaddr;

    std::queue<CRDT> inboxDataQ;
    std::mutex inboxMutex;
    std::queue<CRDT> outboxDataQ;
    std::mutex outboxMutex;

    std::vector<struct sockaddr_in> clients;

public:
    Messenger();
    Messenger(int port);
    ~Messenger();
    Messenger& operator=(const Messenger&);
    int listenPort;
    void addClient(std::string clientAddress, int port);
    struct sockaddr_in getClient(int idx);
    void broadcast(CRDT data);

    bool isInboxEmpty();
    CRDT popInbox();
    int selfSiteId;

    void runServer();
    void stopServer();

private:
    void sendData(CRDT);
    void sendingServer();
    void receivingServer();
};

#endif // MESSENGER_H
