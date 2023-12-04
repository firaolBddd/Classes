#include "vgames.h"

vgames::vgames() {
}

char* vgames::getPublisher() {
    return publisher;
}

int* vgames::getRating() {
    return &rating;
}

int vgames::getType() {
    return 0;
}

