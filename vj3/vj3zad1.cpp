#include <iostream>
#include <vector>

using namespace std;

vector<int> fun(vector<int> v,int& max,int& min)
{
    int j=1;
    vector<int> v1;
    for(int i=0;i<(v.size()/2);i++)
    {
        v1.push_back(v[i]+v[v.size()-j]);
        j++;
        if(v1[v1.size()-1] > max)
            max=v1[v1.size()-1];
        if(v1[v1.size()-1] < min)
            min=v1[v1.size()-1];
    }
    
    return v1;
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(1);
    int max=INT_MIN,min=INT_MAX;
    vector<int> v1=fun(v,max,min);
    
    cout << "novi vektor je: " << endl;
    for(int i=0;i< v1.size();i++)
    {
        cout << " " << v1[i];
    }
    cout << endl;
    cout << "najveca suma je bila: " << max << endl;
    cout << "najmanja suma je bila: " << min;

    return 0;
}