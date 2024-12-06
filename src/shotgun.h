#ifndef SHOTGUN_H
#define SHOTGUN_H

#include <list>

class Shotgun {
    public:
        Shotgun();

    private:
        std::list<std::string> content;
        int dmg;
};

#endif