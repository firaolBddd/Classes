#include "music.h"

music::music() {
}

char* music::getArtist() {
    return artist;
}

char* music::getPublisher() {
    return publisher;
}

int* music::getDuration() {
    return &duration;
}

int music::getType() {
    return 1;
}
