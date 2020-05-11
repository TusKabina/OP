#include "hardcopybook.h"

HardCopyBook::HardCopyBook()
{
}

HardCopyBook::HardCopyBook(string author, string title, int year, int pageCount) : Book(author, title, year)
{
	this->pageCount = pageCount;
}