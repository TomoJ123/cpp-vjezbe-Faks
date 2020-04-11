#include <iostream>
#include <list>
using namespace std;

list<int> unstuffing_bit(list<int> bits)
{
    int counter=0;
    list<int>::iterator j=bits.begin();
    list<int>::iterator k=bits.begin();
    k++;
    for(j;j != bits.end();j++,k++)
    {
        if(*j==1)
        {
            counter++;
        }
        else
        {
            counter=0;
        }
        if(counter==5)
        {
            bits.erase(k);
            counter=0;
            k++;
        }
        
    }
    
    return bits;
}

int main()
{
    list<int> bits;
    list<int>::iterator i;
    cout << "modificirani container:";
    bits.push_back(1);
    bits.push_back(0);
    bits.push_back(1);
    bits.push_back(1);
    bits.push_back(1);
    bits.push_back(0);
    bits.push_back(1);
    bits.push_back(1);
    bits.push_back(1);
    bits.push_back(1);
    bits.push_back(1);
    bits.push_back(0);
    
    i=bits.begin();
    for(i;i!=bits.end();i++)
    {
        cout << *i << " ";
    }
    
    bits=unstuffing_bit(bits);
    cout << endl;
    cout << "primjenjen unstuffing:";
    i=bits.begin();
for(i;i!=bits.end();i++)
    {
        cout << *i << " ";
    }
    
}