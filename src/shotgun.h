#ifndef SHOTGUN_H
#define SHOTGUN_H

#include <vector>
#include <random>

class Shotgun {
    public:
        Shotgun() {
            this->dmg = 1;
        }
        std::string shell(int n=0) {
            return this->content[n];
        }
        void shoot() {
            this->dmg = 1;
            this->content.erase(this->content.begin());
        }
        void insertShells(int lives, int blanks) {
            for (int i = 0; i < lives; i++) {
                this->content.push_back("live");
            }
            for (int j = 0; j < blanks; j++) {
                this->content.push_back("blank");
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
        std::vector<std::string> content;
        int dmg;
};

#endif