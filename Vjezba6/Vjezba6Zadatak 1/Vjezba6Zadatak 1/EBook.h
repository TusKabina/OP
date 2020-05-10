#pragma once
#include "book.h"
#include <iostream>
class EBook : public Book
{
	private:
		string fileName;
		double size;
	public:
		EBook();
		EBook(string author, string title, int year, string fileName, double size);
		double getSize()  { return size; }
		string getFileName();
};