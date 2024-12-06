#ifndef SHOTGUN_H
#define SHOTGUN_H

#include <vector>

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

    private:
        std::vector<std::string> content;
        int dmg;
};

#endif