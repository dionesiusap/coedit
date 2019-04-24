#ifndef VVECTOR_H
#define VVECTOR_H

#include <map>

class Vvector {
private:
    std::map<int, int> vervector;

public:
    Vvector();
    void addSiteId(int siteId);
    void setVersion(int siteId, int version);
    void incrementVersion(int siteId);

    int getCurrentVersion(int siteId);
};

#endif // VVECTOR_H
