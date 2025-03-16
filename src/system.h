#pragma once

#include <cstdlib>
#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
#include "player.h"
#include "shotgun.h"

void clear() {
    std::system("clear");
}

void query(std::string text) {
    std::cout << text << "\n>";
}

bool validName(std::string name, std::vector<Player> *players) {
    if (name == "" || name == " ") {
        return false;
    }
    int arraySize = sizeof(players)/sizeof(*players);
    return std::find(players, players + arraySize, name) != players + arraySize;
}

void initOpponents(Player &plr1, Player &plr2) {
    plr1.addOpponent(plr2);
    plr2.addOpponent(plr1);
}

void initOpponents(Player &plr1, Player &plr2, Player &plr3) {
    plr1.addOpponent(plr2);
    plr1.addOpponent(plr3);
    plr2.addOpponent(plr1);
    plr2.addOpponent(plr3);
    plr3.addOpponent(plr1);
    plr3.addOpponent(plr2);
}

bool shotgunNotEmpty(Shotgun s) {
    return s.content.size() > 0;
}