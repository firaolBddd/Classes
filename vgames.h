// Header guards
#ifndef VGAMESH
#define VGAMESH

#include "dmedia.h"

class vgames : public dmedia {
public:
    vgames();
    char* getPublisher();
    int* getRating();
    int getType();

private:
    char publisher[30];
    int rating;
};

#endif

