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

    return std::find(players, players + players->size(), name) != players + players->size();
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