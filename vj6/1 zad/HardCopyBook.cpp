#include "HardCopyBook.h"

HardCopyBook::HardCopyBook()
{
	numPages = 0;
}

HardCopyBook::HardCopyBook(string name, string nameb, int year, int pagec)
:Book(name,nameb,year)
{
	this->numPages = pagec;
}
