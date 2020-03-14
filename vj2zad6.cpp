#include <iostream>
using namespace std;

struct vector
{
    int* el;
    int fiz,log;
};

void vector_delete(vector& v)
{
    delete [] v.el;
    v.fiz=0;
    v.log=0;
    
}


int vector_size(vector& v)
{
    return v.log;
}

int vector_back(vector& v)
{
    return v.el[v.log-1];
}

int vector_front(vector& v)
{
    return v.el[0];
}

int* vector_pop_back(vector& v)
{
    
    int* arr=new int[v.log];
    for(int j=0; j<v.log-1 ;j++)
    {
        arr[j]=v.el[j];
    }
    delete [] v.el;
    v.log --;
    return arr;
}



int* alocate(int* arr,int& size)
{
    int* newarr=new int[size*2];
    for(int i=0;i<size;i++)
    {
        newarr[i]=arr[i];
    }
    size=size*2;
    delete [] arr;

    return newarr;
}

vector& vector_push_back(vector& v)
{
    if(v.fiz == v.log)
    {
        v.el=alocate(v.el,v.fiz);
    }

    int n;
    cout << "unesite broj:" << endl;
    cin >> n;
    v.el[v.log]=n;
    v.log++;

    return v;
}

vector& vector_new(vector& v,int n)
{
    v.el=new int[n];
    v.fiz=1;
    v.log=0;

    return v;
}

int main()
{
    int n;
    cout << "unesite zeljenu velicinu:" << endl;
    cin >> n;
    vector v;
    v=vector_new(v,n);

    int i=0;
    while(i<n)
    {
        v=vector_push_back(v);
        i++;
    }

    for (int j=0; j<v.log; j++)
    {
        cout << v.el[j] << " ";
    }
    cout << endl;
    cout << "izbrisani zadnji element:" << endl;

    v.el=vector_pop_back(v);
    for(int k=0;k<v.log;k++)
    {
        cout << v.el[k] << " ";
    }
    cout << endl;
    int first=vector_front(v);
    cout << "prvi:" << first << endl;
    int last=vector_back(v);
    cout << "zadnji" << last << endl;
    int size=vector_size(v);
    cout << "velicina vektora: " << size << endl;
    vector_delete(v);
    for(int k=0;k<v.log;k++)
    {
        cout << v.el[k] << " ";
    }
    return 0;
}