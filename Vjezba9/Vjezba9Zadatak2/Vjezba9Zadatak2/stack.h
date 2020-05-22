#pragma once
#include <iostream>



template <class T>

class Stack
{
	private:
		T* p;
		int capacity;
		int element;
	public:
		Stack(int size);
		void push(T el);
		T pop();
		bool isEmpty();
		bool isFull();

};

template<class T>
inline Stack<T>::Stack(int size)
{
	p = new T[size];
	this->capacity = size;
	element = -1;
}

template<class T>
inline void Stack<T>::push(T el)
{
	if (isFull())
	{
		std::cout << "Stack Overflow!";
		exit(EXIT_FAILURE);
	}
	else
	{
		p[++element] = el;
	}
}

template<class T>
inline T Stack<T>::pop()
{
	if (isEmpty())
	{
		std::cout << "Stack UnderFlow!";
		exit(EXIT_FAILURE);
	}
	return p[element--];
}

template<class T>
inline bool Stack<T>::isEmpty()
{
	if (element == -1)
	{
		return true;
	}
	return false;
}

template<class T>
inline bool Stack<T>::isFull()
{
	if (element == capacity - 1)
	{
		return true;
	}
	return false;
}
