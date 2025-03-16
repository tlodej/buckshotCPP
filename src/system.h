#pragma once

#include <cstdlib>
#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
#include "player.h"
#include "shotgun.h"

void clear() {
#ifdef WINDOWS
    std::system("cls");
#else
    std::system ("clear");
#endif
}

void query(std::string text) {
    std::cout << text << "\n>";
}

// very weird function ngl
bool validName(std::string name, std::vector<Player>* players) {
    if (name == "" || name == " ")
        return false;


    for(size_t i = 0; i < players->size(); i++) {
        if (players->at(i).m_Name== name) return false;
    }

    return true;
}