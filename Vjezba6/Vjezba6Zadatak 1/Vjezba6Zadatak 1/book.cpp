#include "book.h"

Book::Book()
{
	
}

Book::Book(string author,string title, int year)
{
	this->author = author;
	this->title = title;
	this->year = year;
}

Book::~Book()
{
}

string Book::getAuthor()
{
	return author;
}

string Book::getTitle()
{
	return title;
}

int Book::getYear()
{
	return year;
}
