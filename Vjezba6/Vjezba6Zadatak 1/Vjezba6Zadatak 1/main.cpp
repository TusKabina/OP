#include "library.h"
void print( vector<string> v) 
{
	for (auto it = v.begin(); it != v.end(); it++) 
	{
		cout << (*it) << endl;
	}
}
int main()
{
	vector<Book*> books;
	Library lib;
	HardCopyBook oneBook("Ivan Rogulj", "Knjiga o knjigama", 2001, 75);
	EBook myBook("Ivan Rogulj", "title", 2003, "tekstualniFile", 13.2);
	EBook myBook2("Ivan Rogulj", "Markov Racunar", 2005, "Hakovanje", 18.9);
	Book* hcBookOne(&oneBook);
	Book* EBookOne(&myBook);
	Book* EBookTwo(&myBook2);
	books.push_back(hcBookOne);
	books.push_back(EBookOne);
	books.push_back(EBookTwo);
	lib.setBooks(books);
	print(lib.getTitles("Ivan Rogulj"));
	print(lib.findTitle("Knji"));
	cout << lib.getAuthorSize("Ivan Rogulj") << endl;
	
}