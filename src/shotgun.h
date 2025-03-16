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
        Shell shoot() {
            return m_Chamber[m_ChamberIndex++];
        }

        Shell peek() {
            return m_Chamber[0];
        }

        void reload() {
            m_ChamberIndex = 0;
            // TODO: make random engine a field of shotgun so we dont recreate it
            // every time we reload
            auto engine = std::default_random_engine{};

            // we can have from 1 to 7 live shells
            std::uniform_int_distribution<int> dist(1, 7);

            int lives = dist(engine);
            int blanks = 8 - lives;

            for (size_t i = 0; i < lives; i++) 
                m_Chamber[m_ChamberIndex++] = Shell::Live;

            for (size_t i = 0; i < blanks; i++)
                m_Chamber[m_ChamberIndex++] = Shell::Blank;

            std::shuffle(m_Chamber.begin(), m_Chamber.end(), engine);
        }

private:
    std::array<Shell, 8> m_Chamber{};
    size_t m_ChamberIndex;
};