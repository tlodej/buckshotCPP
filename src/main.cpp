#include <iostream>
#include <chrono>
#include <thread>
#include <fstream>
#include "shotgun.h"
#include "system.h"
#include "player.h"

using namespace std;

const chrono::duration ONE = chrono::seconds(1);
const chrono::duration TWO = chrono::seconds(2);
const chrono::duration THREE = chrono::seconds(3);
const chrono::duration FOUR = chrono::seconds(4);
const chrono::duration FIVE = chrono::seconds(5);

//cout << *plr << endl; use to print name
int main() {
    cout << "well hello there! welcome to...\n";
    this_thread::sleep_for(THREE);
    cout << "=======================\n";
    cout << "|| BUCKSHOT ROULETTE ||\n";
    cout << "||   (C++ version)   ||\n";
    cout << "=======================\n";
    cout << "v0.0-alpha\n";
    cout << "press enter to start\n";
    cout << "or type 'how' for a how-to-play\n";
    query("you can also check out the credits by typing 'creds'");
    string ans;
    cin >> ans;
    Shotgun *shotgun = new Shotgun();
    clear();
    if (ans == "how") {
        string line;
        ifstream file("guide.txt");
        while (getline(file, line)) {
            cout << line;
        }
        file.close();
        cout << "when you finish reading, press enter\n";
        cin >> line;
    } else if (ans == "creds") {
        string line;
        ifstream file("credits.txt");
        while (getline(file, line)) {
            cout << line;
        }
        file.close();
        cout << "when you finish reading, press enter\n";
        cin >> line;
    } else if (ans == "test time") {
        cout << "enter round and (int)3p\n";
        int round,threeP;
        cin >> round;
        cin >> threeP;
        
    }

    return 0;
}