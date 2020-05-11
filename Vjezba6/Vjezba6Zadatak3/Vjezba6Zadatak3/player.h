#pragma once
#include <string>
using namespace std;
enum class ParNepar
{
	nepar=1,
	par=2
};
class Player
{
	protected:
		string name;
		int hand = 0;
		int points = 0;
		ParNepar parOrNepar;
	public:
		string getName() { return name; }
		string setName(string name) { this->name.assign(name); }
		virtual int getHand() = 0;
		virtual void setHand(int hand) = 0;
		virtual int getPoints() = 0;
		virtual void setPoints() = 0;
		virtual ParNepar getParNepar() = 0;
		virtual void setParNepar(ParNepar parOrNepar) = 0;
		virtual void setBotHand() = 0;
};