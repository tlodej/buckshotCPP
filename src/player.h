#pragma once

#include <vector>
#include <ostream>
#include <string>

class Player {
    public:
        std::string name;

        Player(std::string name, int lives): name(name), lives(lives), wins(0) {
        }

        int getLives() {
            return this->lives;
        }
        
        void addOpponent(Player opp) {
            this->opponents.push_back(opp);
        }

    private:
        int lives;
        int wins;
        std::vector<Player> opponents;
};