#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string fun(string s)
{
    reverse(s.begin(),s.end()-1);
    int j=0;
    for(int i=0;i < s.size();i++)
    {
        if(s[i]== ' ' || s[i]== '.')
        {
            reverse(s.begin()+j,s.begin()+i);
            j=i;
            j++;
        }
    }
    s[0]=toupper(s[0]);
    for(int j=1;j<s.size();j++)
    {
        s[j]=tolower(s[j]);
    }
    return s;
}

int main()
{
    string s="Strah me corone virusa.";
    s=fun(s);
    cout << s;
    return 0;
}