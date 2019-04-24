#include "vvector.h"

Vvector::Vvector() {

}

void Vvector::addSiteId(int siteId) {
    vervector[siteId] = 0;
}

void Vvector::setVersion(int siteId, int version) {
    vervector[siteId] = version;
}

void Vvector::incrementVersion(int siteId) {
    vervector[siteId]++;
}

int Vvector::getCurrentVersion(int siteId) {
    return vervector[siteId];
}
