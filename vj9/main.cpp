
#include "Header.h"




template<typename T>
void sortarr(T* a,int size) {
	T temp;
	for (int i = 0; i < size; ++i)
	{
		for (int j = i + 1; j < size; ++j)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

template<>
void sortarr(char* a, int size)
{
	char temp;
	for (int i = 0; i < size; ++i)
	{
		for (int j = i + 1; j < size; ++j)
		{
			if (tolower(a[i]) > tolower(a[j]))
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int main()
{
	int arr[] = { 2, 5, 1, 7, 5, 4 };
	char arr1[] = "afSafA";
	int size = sizeof(arr) / sizeof(arr[0]);
	sortarr(arr1, size);
	for (int i = 0; i < size; ++i)
	{
		//cout << arr1[i];
	}
	vector<int> a = { 1,2,3,4,5 };
	vector<double> b = { 1.2 , 1.3,1.4 };
	vector<char> c = { 'a','b' };
	stack<double> stack1(b);
	stack<char> stack2(c);
	stack<int> stack(a);
	stack.push(1.6);
	stack.pop();
	stack.print();
	stack1.push(1);
	stack1.print();
	
	if (stack.isEmpty() )
	{
		cout << "its empty!" << endl;
	}
	else {
		cout << "its not empty!";
	}
}