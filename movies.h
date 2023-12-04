// Header guards
#ifndef MOVIESH
#define MOVIESH

#include "dmedia.h"

class movies : public dmedia {
public:
    movies();
    char* getDirector();
    int* getDuration();
    float* getRating();
    int getType();

private:
    char director[30];
    int duration;
    float rating;
};

#endif
