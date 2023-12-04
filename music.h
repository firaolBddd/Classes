// Header guards
#ifndef MUSICH
#define MUSICH

#include "dmedia.h"

class music : public dmedia {
public:
    music();
    char* getArtist();
    char* getPublisher();
    int* getDuration();
    int getType();

private:
    char artist[30];
    char publisher[30];
    int duration;
};

#endif
