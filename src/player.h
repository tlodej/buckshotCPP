#pragma once

#include <string>

class Player {
    public:
        std::string m_Name;
        int m_Lives;
        int m_Wins;

        Player(std::string name, int lives): m_Name(name), m_Lives(lives), m_Wins(0) {
        }
};