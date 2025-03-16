#include <iostream>
#include <chrono>
#include <thread>
#include <fstream>
#include "shotgun.h"
#include "system.h"
#include "player.h"

void welcomeMessage() {
    std::cout << 
            "=======================\n"
            "|| BUCKSHOT ROULETTE ||\n"
            "||   (C++ version)   ||\n"
            "=======================\n"
            "v0.0-alpha\n"
            "press enter to start\n"
            "or type 'how' for a how-to-play\n"
            "you can also check out the credits by typing 'creds'\n";
}

void commandPrompt() {
    std::cout << "\n> ";
    std::string command;
    std::cin >> command;

    if (command == "how") {
        // TODO: create guide file and embed it with #include or smth
    } else if (command == "creds") {
        // TODO: create credits file and embed it with #include or smth
    } else if (command == "test time") {
        std::cout << "enter round and (int)3p\n";
        int round;
        std::cin >> round;

        int threeP;
        std::cin >> threeP;
    }

}

//cout << *plr << endl; use to print name
int main() {
    welcomeMessage();
    commandPrompt();

    Shotgun shotgun{};


    return 0;
}