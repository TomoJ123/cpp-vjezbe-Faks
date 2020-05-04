#pragma once
#include "Book.h"

class HardCopyBook : public Book {
	int numPages;
public:
	HardCopyBook();
	HardCopyBook(string, string, int, int);
	void setNPage(int i) { this->numPages = i; }
	int getMB() { return 0; }
};