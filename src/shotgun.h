#pragma once

#include <vector>
#include <random>
#include <algorithm>

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

        void insertShells(int lives, int blanks) {
            for (int i = 0; i < lives; i++) {
                this->content.push_back(Shell::Live);
            }
            for (int j = 0; j < blanks; j++) {
                this->content.push_back(Shell::Blank);
            }
            auto rd = std::random_device {};
            auto rng = std::default_random_engine { rd() };
            std::shuffle(this->content.begin(), this->content.end(), rng);
        }
        void empty() {
            this->dmg = 1;
            this->content.clear();
        }

    private:
        int dmg;
};