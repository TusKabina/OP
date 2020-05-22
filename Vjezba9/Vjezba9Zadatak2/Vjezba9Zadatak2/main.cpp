#include "stack.h"


int main()
{
	Stack<int> s(5);

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	bool t = s.isFull();
	std::cout << t;
}