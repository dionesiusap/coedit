#include <string>
#include <cstdlib>
#include <cstring>
#include "crdt.h"

CRDT::CRDT() {

}

CRDT::CRDT(int siteId, char command, char value, double position){
    this->siteId = siteId;
    this->command = command;
    this->value = value;
    this->position = position;
}

void CRDT::setSiteId(int siteId) {
    this->siteId = siteId;
}

int CRDT::getSiteId(){
    return this->siteId;
}

void CRDT::setCommand(char command) {
    this->command = command;
}

char CRDT::getCommand() {
    return this->command;
}

void CRDT::setValue(char value){
    this->value = value;
}

char CRDT::getValue(){
    return this->value;
}

void CRDT::setPosition(double position) {
    this->position = position;
}

double CRDT::getPosition(){
    return this->position;
}

void CRDT::setCounter(int counter) {
    this->counter = counter;
}

int CRDT::getCounter() {
    return this->counter;
}

char* CRDT::serialize() {
    return reinterpret_cast<char*>(this);
}

CRDT CRDT::deserialize(char *crdtData) {
    return *reinterpret_cast<CRDT*>(crdtData);
}
