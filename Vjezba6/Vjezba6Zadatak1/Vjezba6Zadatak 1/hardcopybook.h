#pragma once
#include "EBook.h"


class HardCopyBook : public Book
{
	private:
	int pageCount;
	public:
		HardCopyBook();
		HardCopyBook(string author, string title, int year, int pageCount);
		double getSize()  { return 0.0; }
		int getPageCount() const { return pageCount; }
};