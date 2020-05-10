#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player
{
    protected:
        int points=0;
        int playerHand=0;
    public:
        Player() {}
        ~Player() {}
        int getPlayerHand() { return playerHand;}
        void setPlayerHand(int playerHand) { this->playerHand = playerHand;}
        int getPoints() { return points;}
        void setPoints() {this->points=points+1;}
        virtual string getPlayerName()=0;
        virtual void setPlayerName(string name)=0;
        virtual void printPlayerName() = 0;
        virtual void setBotHand() = 0;
        virtual int getBotHand() = 0;
        virtual int botGuess()=0;
};
