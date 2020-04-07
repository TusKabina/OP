#pragma once
#include <iostream>
using namespace std;
enum  ZOG
{
	spadi = 1,
	kupe,
	bate,
	dinari
};


class Karta
{
private:
	ZOG zog;
	int broj;
public:
	int dobijBroj();
	ZOG dobijZog();
	void printKarta();
	Karta(ZOG zog, int broj);
};