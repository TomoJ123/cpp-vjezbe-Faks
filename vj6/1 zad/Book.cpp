#include "Book.h"


Book::Book() {
	this->yearBook = 0;
}

Book::~Book()
{
	cout << "book deleted" << endl;
}


Book::Book(string name, string nameb, int year)
{
	this->authorName = name;
	this->nameBook = nameb;
	this->yearBook = year;
}

void Book::setAname(string name)
{
	this->authorName = name;
}

void Book::setBookname(string name)
{
	this->nameBook = name;
}

void Book::setyear(int i)
{
	this->yearBook = i;
}

string Book::getAname()
{
	return authorName;
}

string Book::getBname()
{
	return nameBook;
}

int Book::getYear()
{
	return yearBook;
}