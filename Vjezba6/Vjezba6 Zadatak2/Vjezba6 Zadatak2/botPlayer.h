#pragma once
#include "humanplayer.h"
#include <ctime>

class BotPlayer : public Player
{
private:
    string name;
public:
    BotPlayer() : Player()
    {

    }
    BotPlayer(string name) { this->name.assign(name); }
    string getPlayerName() { return name; }
    void printPlayerName() { cout << name << endl; }
    void setPlayerName(string name) { this->name.assign(name); }
    void setBotHand();
    int getBotHand();
    int botGuess();
    ~BotPlayer() {}

};