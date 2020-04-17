#include "Board.h"


int main()
{
	Board b(20,10);
	Point p1(2,2), p2(7.9, 7.9), p3(16, 8), p4(2, 8), p5(2, 2),p6(5,8);
	b.draw_line(p1, p2, 'R');
	//b.draw_up_line(p6, 'D');
	b.draw_line(p3, p4, 'K');
	//b.draw_line(p5, p6, 'H');
	b.draw_line(p4, p5, 'C');
	//b.draw_char(p5, '5');
	//b.draw_up_line(p1, 'P');
	//b.draw_up_line(p2, 'U');
	//b.draw_char(p3, 'Z');
	//b.drawChar(p2, 'U');
	//b.drawChar(p2, 'U');
	b.display();
}