#include "library.h"

Library::Library()
{
	
}

Library::~Library()
{
}

void Library::setBooks(vector<Book*> books)
{
	this->books = books;
}
vector<string> Library::getTitles(string author)
{
	vector<string> titles;
	for (auto it = books.begin(); it != books.end(); it++)
	{
		if (author == (*it)->getAuthor())
		{
			titles.push_back((*it)->getTitle());
		}
	}
	return titles;
}

double Library::getAuthorSize(string author)
{
	int size = 0;
	for (auto it = books.begin(); it != books.end(); it++)
	{
		if (author == (*it)->getAuthor())
		{
			size = size + (*it)->getSize();
		}
	}
	return size;
}

vector<string> Library::findTitle(string partOfTitle)
{
	vector<string> titles;
	for (auto it = books.begin(); it != books.end(); it++)
	{
		if ((*it)->getTitle().find(partOfTitle) != string::npos)
		{
			titles.push_back((*it)->getTitle());
		}
	}
	return titles;
}


