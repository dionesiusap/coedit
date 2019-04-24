#include "messengerTest.h"

void testAddClient() {
    Messenger msgr;
    std::string adr1;
    std::string adr2;

    std::string addr1 = "127.0.0.1";
    std::string addr2 = "192.168.0.1";

    msgr.addClient(addr1, 8000);
    msgr.addClient(addr2, 5050);

    adr1 = std::string(inet_ntoa(msgr.getClient(0).sin_addr));
    adr2 = std::string(inet_ntoa(msgr.getClient(1).sin_addr));

    if(addr1.compare(adr1) || addr2.compare(adr2)){
        throw "adding client failed";
    }
}

void testThreadingQueue() {
    Messenger msgr(8000);
    std::string addr = "127.0.0.1";
    msgr.addClient("127.0.0.1", 8000);

    msgr.runServer();

    CRDT data1 = CRDT(1, 'I', 'A', 1.2f);
    CRDT data2 = CRDT(1, 'I', 'B', 1.3f);
    msgr.broadcast(data1);
    msgr.broadcast(data2);

    while(msgr.isInboxEmpty());
    CRDT recvData = msgr.popInbox();
    while(msgr.isInboxEmpty());
    recvData = msgr.popInbox();

    std::cout << recvData.getValue() << std::endl;

    if(recvData.getValue() != data2.getValue()) {
        throw "data not received properly";
    }

}
