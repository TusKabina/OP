#include "Board.h"
#include <cmath>

#define abs(x) ((x) < 0 ? -(x) : (x))
#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) < (b)) ? (a) : (b))

void Board::display()
{
	for (int i = 0; i < column; ++i)
	{
		for (int j = 0; j < row; ++j)
		{
			cout << this->matrix[j][i];

		}
		cout << endl;
	}
}

void Board::draw_up_line(Point p1, char ch)
{
	int x = round(p1.getX());
	int y = round(p1.getY());
	if (x >= row - 1 || y >= column - 1)
		exit(EXIT_FAILURE);

	for (int j = 1; j < y + 1; j++)
	{
		matrix[x][j] = ch;
	}
}


void Board::draw_char(Point p1, char ch)
{
	int x = round(p1.getX());
	int y = round(p1.getY());
	cout << "row " << row << " x  " << x << " stu " << column << " y " << y << endl;
	if (x >= row - 1 || y >= column - 1)
	{
		exit(EXIT_FAILURE);
	}
	else
	{
		this->matrix[x][y] = ch;
	}
		
}
void Board::draw_line(Point p1, Point p2, char ch)
{
	int x1 = round(p1.getX());
	int y1 = round(p1.getY());
	int x2 = round(p2.getX());
	int y2 = round(p2.getY());
	if (x1 >= row - 1 || y1 >= column - 1 || x2 >= row - 1 || y2 >= column - 1)
	{
		exit(EXIT_FAILURE);
	}
	int dX = abs(x2 - x1);
	int dY = abs(y2 - y1);
	double longestDirection = max(dX, dY);
	double divided = round(longestDirection);
	double incrementorX = dX / divided;
	double incrementorY = dY / divided;
	double x = min(x1, x2);
	double y = min(y1, y2);
	for (int numOfLoops = 0; numOfLoops < (int)divided; numOfLoops++)
	{
		matrix[(int)round(x)][(int)round(y)] = ch;
		x = x + incrementorX;
		y = y + incrementorY;
		
	}
}

Board::Board(int row,int column)
{
	this->row = row;
	this->column = column;
	this->matrix = new char*[row];
	for (int i = 0; i < row; ++i)
	{
		this->matrix[i] = new char[column];
	}
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			if (i == 0 || j == 0 || i == row - 1 || j == column - 1)
			{
				this->matrix[i][j] = 'X';
			}
			else
			{
				this->matrix[i][j] = ' ';
			}
		}
	}

}
Board::Board()
{
	
}
Board::Board(const Board& b2)
{
	row = b2.row;
	column = b2.column;
	matrix = b2.matrix;


}
Board::~Board()
{
	for (int i = 0; i < row; i++)
	{
		delete[]matrix[i];
	}
	delete[]matrix;
}

