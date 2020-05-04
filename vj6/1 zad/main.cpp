#include "Book.h"
#include "HardCopyBook.h"
#include "EBook.h"
#include "Library.h"

void print(set<string> result)
{
	for (auto it = result.begin(); it != result.end(); ++it)
	{
		cout << *it;
		cout << endl;
	}
}


int main()
{
	
	Library library;
	vector<Book*> books;

	HardCopyBook book("mate", "zlocin i kazna", 2005, 50);
	Book* pntr = &book;
	books.push_back(pntr);
	HardCopyBook book1("tomo", "sreca u vreci", 2001, 20);
	Book* pntr1 = &book1;
	books.push_back(pntr1);
	EBook book2("tomo", "cvijece u kutiji", 2005, "txt", 5);
	Book* pntr2 = &book2;
	books.push_back(pntr2);
	EBook book3("tomo", "goreca suma", 2004, "txt", 20);
	Book* pntr3 = &book3;
	books.push_back(pntr3);


	library.setBooks(books);
	//set<string> result = library.getBnameofAuthor("tomo");
	
	//print(result);
	//int resultt = library.totalMb("tomo");
	//cout << resultt;
	//set<string> result = library.getBnamebysubstr("suma");
	//print(result);
	return 0;
	
	
}