#pragma once
#include "point.h"
class Board
{
private:
	char** matrix=0;
	int row =0;
	int column =0;
public:
	
	Board();
	Board(int row, int column);
	Board(const Board& b2);
	~Board();
	void display();
	void draw_line(Point, Point, char ch);
	void draw_up_line(Point, char ch);
	void draw_char(Point, char ch);
	
	
};