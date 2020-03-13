#include <iostream>
using namespace std;

int& raise(int arr[],int ind)
{
    return arr[ind];
}

int main()
{
   int arr[4]={12,87,44,32};
    int ind=2;
    cout << " broj na indeksu je: " << arr[ind];
    raise(arr,ind)+=1;
    cout << "  broj na indeksu je povecan za jedan: " << arr[ind];

}





