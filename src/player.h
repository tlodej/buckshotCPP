#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <ostream>

class Player {
    public:
        std::string name;
        Player(std::string name, int lives) {
            this->name = name;
            this->lives = lives;
            this->wins = 0;
        }
        int getLives() {
            return this->lives;
        }
        friend std::ostream& operator<< (std::ostream &s, Player &player);
    private:
        int lives;
        int wins;
        std::vector<Player> opponents;
};

std::ostream& operator<<(std::ostream &s, Player &player) {
    s << player.name << "'s turn\n" << "you have " << player.getLives() << " lives\n" << "type to use:\n" << "shoot - shotgun\n";
    return s;
}

#endif