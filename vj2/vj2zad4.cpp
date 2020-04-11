
#include <iostream>

using namespace std;


int* fun(int n)
{
    int * arr=new int[n];
    arr[0]=1;
    arr[1]=1;

    int i=0,j;

    for(j=2;j<n;j++)
    {
        arr[j]=arr[i]+arr[i+1];
        i++;
    }
    return arr;
}


int main()
{

    int n;
    cout << "unesite n: ";
    cin >>   n;
    int* rez=fun(n);
    int k;
    for(k=0;k<n;k++)
    {
        cout << rez[k] << endl;
    }



}
