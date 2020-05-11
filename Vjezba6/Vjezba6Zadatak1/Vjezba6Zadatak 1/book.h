#pragma once
#include <string>

using namespace std;


class Book
{
	protected:
		string author="";
		string title = "";
		int year=0;
	public:
		Book();
		Book(string author, string title, int year);
		~Book();
		string getAuthor();
		string getTitle();
		int getYear();
		virtual double getSize() = 0;
};