#pragma once
#include "Book.h"


class EBook : public Book {
protected:
	string fileName;
	int sizeMB;
public:
	EBook() { sizeMB = 0; }
	EBook(string, string, int, string, int);
	void setfilename(string s) { this->fileName = s; }
	void setSize(int i) { this->sizeMB = i; }
	int getMB() { return sizeMB; }
	string getFilename() { return fileName; }
};