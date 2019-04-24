#include <iostream>
#include "crdtTest.h"
#include "crdt.h"

void serializationTest() {
    CRDT a(1, 'A', 'a', 1.2);
    char* serialized_a = a.serialize();

    CRDT b = CRDT::deserialize(serialized_a);
    if(!(a.getSiteId() == b.getSiteId())) {
        throw "serialization failed";
    }
}
