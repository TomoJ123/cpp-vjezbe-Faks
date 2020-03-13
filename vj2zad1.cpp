#include <iostream>

using namespace std;


void maxmin(int& a,int& b,int arr[7],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]>a)
            a=arr[i];
        if(arr[i]<b)
            b=arr[i];
    }
}


int main()
{
    int n=7;
    int arr[n]={10,5,4,9,87,23,33};
    int maxx=0;
    int minn=INT_MAX;
    maxmin(maxx,minn,arr,n);
    cout << "najveci broj je " << maxx;
    cout << "  najmanji broj je " << minn;
    return 0;
}




