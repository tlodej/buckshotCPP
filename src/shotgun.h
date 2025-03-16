#pragma once

#include <vector>
#include <random>
#include <algorithm>
#include <cstdlib>

enum class Shell {
    Blank,
    Live
};

class Shotgun {
    public:
        std::vector<Shell> content;

        Shotgun() {
            this->dmg = 1;
            this->content = {};
        }

        Shell shell(int n=0) {
            return this->content[n];
        }

        void shoot() {
            this->dmg = 1;
            this->content.erase(this->content.begin());
        }

        void reload() {
            // TODO: make random engine a field of shotgun so we dont recreate it
            // every time we reload
            auto engine = std::default_random_engine{};

            // we can have from 1 to 7 live shells
            std::uniform_int_distribution<int> dist(1, 7);

            int lives = dist(engine);
            int blanks = 8 - lives;

            for (size_t i = 0; i < lives; i++)
                content.push_back(Shell::Live);

            for (size_t i = 0; i < blanks; i++)
                content.push_back(Shell::Blank);

            std::shuffle(content.begin(), content.end(), engine);
        }

        void empty() {
            this->dmg = 1;
            this->content.clear();
        }

    private:
        int dmg;
};