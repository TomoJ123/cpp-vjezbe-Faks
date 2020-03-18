#include <iostream>
#include <list>
using namespace std;

list<int> stuffing_bit(list<int> bits)
{
    list<int>::iterator i=bits.begin();
    list<int>::iterator j=bits.begin();
    j++;
    int counter=0;
    for(i;i != bits.end();i++)
    {
        if(*i==1)
        {
            counter++;
        }
        else
        {
            counter=0;
        }
        if(counter==5)
        {
            bits.insert(j,0);
            counter=0;
            i++;
            
        }
        j++;
        
    }
    if(counter==5)//ako ima zadnjih 5 jedinica
    {
        bits.insert(i,0);
    }
    return bits;
}


int main()
{
    list<int> bits;
    list<int>::iterator it=bits.begin();

    cout << "unesite binarne znamenke 0 ili 1,za kraj neki drugi broj:" << endl;
    int n;

    while(true)
    {
        cin >> n;
        if(n == 0 || n==1)
        {
            bits.push_back(n);
        }
        else
        {
            break;
        } 
    }
    bits=stuffing_bit(bits);
    it=bits.begin();
    for(it;it != bits.end();it++)
    {
        cout << *it << " ";
    }
    return 0;
}