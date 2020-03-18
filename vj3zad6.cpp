#include <iostream>
#include <list>
using namespace std;

int fun(list<int>& lst,int counter)
{
    int first,n1,last;
    list<int>::iterator it;
    list<int>::iterator i;
    i=lst.begin();
    it=lst.begin();
    it++;
    

    for(i;i !=lst.end();++i)
    {
        if(*i %2 == 0 && *i != 0)
        {
            lst.insert(it,0);
            it++;
        }
        if(*i %2==1 && *i != 1 )
        {
            lst.insert(i,1);
            it++;
        }
    }
    i=lst.begin();
    for(i;i!=lst.end();i++)
    {
        if(*i == 0)
        {
            first++;
            break;
        }
        first++;
    }
    i=lst.begin();
    for(i;i!=lst.end();i++)
    {
        if(*i == 1)
        {
            last=n1;
        }
        n1++;
    }
    counter = last-first;
    return counter;
}

int main()
{
    int counter=0;
    list<int> lst;
    list<int>::iterator it;
    for(int i=5;i<=11;i++)
    {
        lst.push_back(i);
    }
    lst.push_back(7);
    lst.push_back(7);
    lst.push_back(9);
    lst.push_back(5);
    int result=fun(lst,counter);
    it=lst.begin();
    cout << "lista je:";
    for(it=lst.begin();it != lst.end();it++)
    {
        cout << " " << *it;
    }
    cout << endl;
    cout << "udaljenost je:" << result;
    return 0;
}