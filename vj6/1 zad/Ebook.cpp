#include "EBook.h"

EBook::EBook(string name, string nameb, int year, string fn, int size)
:Book(name,nameb,year)
{
	this->fileName = fn;
	this->sizeMB = size;
}