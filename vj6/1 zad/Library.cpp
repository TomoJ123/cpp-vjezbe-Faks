#include "Library.h"



Library::~Library()
{  /*
	for (int i = 0; i < books.size(); i++)
	{
		delete books[i];
	}
	books.clear();
	*/
}

void Library::print()
{
	for (int i = 0; i < books.size(); i++) {
		cout << books[i]->getAname();
	}
}

set<string> Library::getBnameofAuthor(string name)
{
	set<string> result;
	for (int i = 0; i < books.size(); i++)
	{
		if (books[i]->getAname() == name)
		{
			result.insert(books[i]->getBname());
		}
	}
	return result;
}


int Library::totalMb(string name)
{
	int result=0;
	for (int i = 0; i < books.size(); i++)
	{
		if (books[i]->getAname() == name)
		{
			result += books[i]->getMB();
		}
	}
	return result;
}

set<string> Library::getBnamebysubstr(string subs)
{
	set<string> result;

	for (int i = 0; i < books.size(); i++)
	{
		if((books[i]->getBname()).find(subs) > 0 && (books[i]->getBname()).find(subs) <= books[i]->getBname().size())
		{
			result.insert(books[i]->getBname());
		}
	}
	return result;
}