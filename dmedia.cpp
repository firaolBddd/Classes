#include "dmedia.h"

dmedia::dmedia() {
}

char* dmedia::getTitle() {
    return title;
}

int* dmedia::getYear() {
    return &year;
}

int dmedia::getType() {
    return 0;
}
