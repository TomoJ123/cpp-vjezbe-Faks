#pragma once

using namespace std;
#include <iostream>
#include <vector>

template <typename S>
class stack {
	vector<S> vect;
public:
	stack(vector<S> a) { this->vect = a; }
	~stack() { cout << "destructor!" << endl; }
	void push(S n);
	void pop();
	bool isEmpty();
	void print();
};

template <typename S>
void stack<S>::print()
{
	for (int i = 0; i < vect.size(); ++i)
	{
		cout << vect[i] << " ";
	}
	cout << endl;
}


template <typename S>
void stack<S>::push(S n)
{
	vect.push_back(n);
}

template <typename S>
void stack<S>::pop()
{
	vect.pop_back();
}

template <typename S>
bool stack<S>::isEmpty()
{
	if (vect.size() == 0)
	{
		return true;
	}
	return false;
}