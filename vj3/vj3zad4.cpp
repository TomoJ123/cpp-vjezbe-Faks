#include <iostream>
#include <string>

using namespace std;

string fun(string str,string str1)
{
    string substr;
    string match;
    int size=str.size();
    int size1=str1.size();

    if (size > size1) 
    {
		int tmp = size;
		size = size1;
		size1 = tmp;
    }
    for(int i=0;i<size;i++)
    {
        match.clear();
        for(int j=0;j<size1;j++)
        {
            if(i+j < size && str[i+j] == str1[j])
            {
                match.push_back(str1[j]);
            }
            else
            {
                if(match.size() > substr.size ())
                {
                    substr=match;
                    match.clear();
                }
            }
            
        }
    }
    
    
    return substr;
}


int main()
{
    string str="onomatopeja";
    string str1="matrikula";
    string result=fun(str,str1);
    
    cout << result;
    
    
    return 0;
}