#pragma once
#include "Book.h"


class Library {
	vector <Book*> books;
public:
	~Library();
	vector<Book*> getBooks() { return books; }
	void setBooks(vector<Book*> pntrbooks) { this->books = pntrbooks; }
	void print();
	set<string> getBnameofAuthor(string);
	int totalMb(string);
	set<string> getBnamebysubstr(string);
};