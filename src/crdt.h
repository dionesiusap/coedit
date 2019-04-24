#ifndef CRDT_H
#define CRDT_H

#include <string>

//event command list :
//    - I insert
//    - D delete
//    - M move cursor

class CRDT {
private:
    int siteId;
    char command;
    char value;
    double position;

public:
    CRDT();
    CRDT(int siteId, char command, char value, double position);

    void setSiteId(int);
    void setCommand(char);
    void setValue(char);
    void setPosition(double);

    int getSiteId();
    char getCommand();
    char getValue();
    double getPosition();

    char* serialize();
    static CRDT deserialize(char*);
};

#endif // CRDT_H
