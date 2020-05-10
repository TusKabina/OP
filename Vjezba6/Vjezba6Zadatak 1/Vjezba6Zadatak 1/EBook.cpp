#include "EBook.h"

EBook::EBook() : Book()
{
}

EBook::EBook(string author, string title, int year, string fileName, double size) : Book(author, title, year)
{
	this->fileName = fileName;
	this->size = size;
}


string EBook::getFileName()
{
	return fileName;
}
