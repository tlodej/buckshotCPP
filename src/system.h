#ifndef SYSTEM_H
#define SYSTEM_H

#include <cstdlib>
#include <algorithm>
//#include "player.h"

void clear() {
    std::system("clear");
}

void query(std::string text) {
    std::cout << text << "\n>";
}

bool validName(std::string name, std::array<> *players) {
    if (name == "" || name == " ") {
        return false;
    }
    int arraySize = sizeof(players)/sizeof(*players);
    return std::find(players, players + arraySize, name) != players + arraySize;
}

#endif