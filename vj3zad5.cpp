#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> fun(vector<string> v,int n)
{
    
    vector<string> v1;
    string s=v[n];
   string s1="";
    int k=0;

    for(int i=0;i<s.size()+1;i++)
    {
        if (s[i] == ' ' || i == s.size())
        {
            v1.push_back(s1);
            s1="";
        }
        else
        {
            s1=s1+s[i];
        }
    }
      
   for(int j=0;j<v1.size();j++)
   {
       if(v1[j][0] == 'a' || v1[j][0] =='e' || v1[j][0] =='i' || v1[j][0] =='o' || v1[j][0] == 'u')
       {
           
            v1[j].push_back('h');
            v1[j].push_back('a');
            v1[j].push_back('y');
       }
       else
       {
           k=0;
           while(true)
           {
               if(v1[j][k] == 'a' || v1[j][k] == 'e' || v1[j][k] == 'i' || v1[j][k] == 'o' || v1[j][k] == 'u')
               {
                  break;
               }
               else
               {
                  v1[j].push_back(v1[j][k]);
                  v1[j].erase(k,1);
                  
                 
               }
               
           }
           v1[j].push_back('a');
           v1[j].push_back('y');
       }
   }
    string newstr;
    for(int l=0;l<v1.size();l++)
    {
        for(int p=0;p<v1[l].size();p++)
        {
            newstr.push_back(v1[l][p]);
        }
        newstr.push_back(' ');
    }
    v1[n]=newstr;
    return v1;
}

int main()
{
    int n;
    vector<string> v;
    string s1="can i call you";
    string s2="please time is important";
    string s3="what time is it";
    v.push_back(s1);
    v.push_back(s2);
    v.push_back(s3);
    cout << "koju recenicu zelite prevesti na pig jezik: \n";
    cin >> n;
    if(n>v.size()-1)
    {
        cout << "Nema toliko recenica.\n";
    }
    else
    {
        v=fun(v,n);
    }
    
    cout << v[n];
    return 0;
}