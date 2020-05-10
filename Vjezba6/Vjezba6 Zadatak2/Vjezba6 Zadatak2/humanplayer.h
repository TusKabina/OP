#pragma once
#include "player.h"

class HumanPlayer : public Player
{
    private:
        string name;
    public:
        HumanPlayer() : Player() {}
        HumanPlayer(string name) { this->name.assign(name); }
        string getPlayerName() { return name;}
        void printPlayerName() { cout << name << endl; }
        void setPlayerName(string name) { this->name.assign(name);}
        int getBotHand() { return 0; }
        void setBotHand() { this->playerHand = 0; }
        int botGuess() { return 0; };
        ~HumanPlayer() {}

};
