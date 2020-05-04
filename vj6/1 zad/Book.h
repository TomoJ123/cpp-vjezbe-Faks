#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <set>
using namespace std;



class Book {
protected:
	string authorName;
	string nameBook;
	int yearBook;
public:
	Book();
	virtual ~Book();
	Book(string, string, int);
	void setAname(string);
	void setBookname(string);
	void setyear(int);
	virtual int getMB() = 0;

	string getAname();
	string getBname();
	int getYear();
};