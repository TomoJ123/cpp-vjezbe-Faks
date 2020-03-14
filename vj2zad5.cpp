#include <iostream>
using namespace std;

int* doublearr(int* arr,int size)
{
    int* newarr=new int[size*2];
    for(int i=0;i<size;i++)
    {
        newarr[i]=arr[i];
    }
    delete [] arr;
    return newarr;
}

int* fun(int &size,int &k)
{
    int i=0;
    int* arr=new int[10];
    int digit=1;
    
    while(digit !=0)
    {
        
        cout << "unesite broj a za prestanak upisite nulu:" << endl;
        cin >> digit;
        if(digit==0) //ovo je samo za to da mi ne uhvati 0 za kraj
            break;
        arr[i]=digit;
        i++;
        k++;
        if(i==size)
        {
            arr=doublearr(arr,size);
            size=size*2;
        }
    }
    return arr;

}

int main()
{

    int size=10;
    int k=0; //k je koristen samo da ispisem niz bez nekoristenih alociranih mjesta
    int *array=fun(size,k);
   
   for(int i=0;i<k;i++)
    {
        cout << " " << array[i];
    }
    cout << endl;

    cout << "niz ima:" << size << " elemenata";
    delete[] array;
    
    return 0;
    

    
}