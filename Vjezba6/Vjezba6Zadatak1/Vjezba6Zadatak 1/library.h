#pragma once
#include "hardcopybook.h"
#include <vector>

class Library
{
	private:
		vector<Book*> books;
	public:
		Library();
		~Library();
		void setBooks(vector<Book*> books);
		vector<string> getTitles(string author);
		double getAuthorSize(string author);
		vector<string> findTitle(string partOfTitle);

};



