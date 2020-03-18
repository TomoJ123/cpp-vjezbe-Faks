#include <iostream>
#include <string>

using namespace std;
string fun(string str,string substr)
{
    
    
   int i;
    for(;;)
    {
        i=str.find(substr);
        if(i >0 && i < str.size()){
        str.erase(str.begin()+i,str.begin()+i+substr.size());}
        if(i < 0 && i>str.size())
        {
            break;
        }
    }
    
    
    
    
    return str;
}

int main()
{
    string str="substrsubstrstrajdeeestrajdestr";
    string substr="str";
    string s=fun(str,substr);
    cout << s;
    return 0;
}