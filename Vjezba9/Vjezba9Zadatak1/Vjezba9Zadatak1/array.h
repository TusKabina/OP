/*Napišite template funkciju za sortiranje niza. 
Napišite specijalizaciju tefunkcije za nizchar-ova u 
kojoj neæe biti razlike izmeðu malih i velikih slova.*/
#include <iostream>
#include <ctype.h>
template <typename T>

class Array
{
	private:
		T *p;
		int size;
	public:
		Array(int size) : p(new T[size]) { { this->size = size; } }
		~Array() { delete[] p; }
		T& operator[](int i) { return p[i]; }
		void sort();
		int getSize() { return this->size; }
		void print();
};



template<typename T>
inline void Array<T>::sort()
{
	for (int i=0; i < this->size; i++)
	{
		for (int j = 0; j < this->size; j++)
		{
			if (p[i] < p[j])
			{
				int temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}
}
template<typename T>
inline void Array<T>::print()
{
	for (int i = 0; i < size; i++)
	{
		std::cout << " " << p[i];
	}
}


template <>
class Array<char>
{
	char* p;
	int size;
public:
	Array(char* p, int size);
	Array(int size) : p(new char[size]) { { this->size = size; } }
	~Array() { delete[] p; }
	char& operator[](int i) { return p[i]; }
	void sort();
	int getSize() { return this->size; }
	void print();
};
inline Array<char>::Array(char* arr, int size)
{
	this->p = new char[size];
	this->size = size;
	for (int i = 0; i < size; i++)
	{
		this->p[i] = arr[i];
	}

}
inline void Array<char>::sort()
{
	for (int i = 0; i < this->getSize(); i++)
	{
		p[i] = tolower(p[i]);
	}
	for (int i = 0; i < this->getSize(); i++)
	{
		for (int j = 1; j < this->getSize(); j++)
		{
			if (p[i] < p[j])
			{
				char temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}
}
inline void Array<char>::print()
{
	for (int i = 0; i < size; i++)
	{
		std::cout << " " << p[i];
	}
}
