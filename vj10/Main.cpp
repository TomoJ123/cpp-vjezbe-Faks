#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <algorithm>


using namespace std;


bool isLessThan(int i)
{
    return i < 300;
}

bool isLarger(int i)
{
    return i > 500;
}

int pred(int i, int j)
{
    return i > j;
}

int main()
{
    vector<int> v;
    try {
        ifstream f("numbers.txt");
        if (!f)
            throw 1;
    }
    catch (int){
        cout << "File doesnt exist!";
    }

    ifstream f("numbers.txt");
    istream_iterator<int> is(f), eos;
    copy(is, eos, back_inserter(v));
    ostream_iterator<int> os(cout, ",");


    cout << "Number of numbers larger than 500: " << count_if(v.begin(), v.end(), isLarger) << endl;
    auto result = minmax_element(v.begin(), v.end());
    cout << "Smallest number is: " << *result.first << " and largest: " << *result.second << endl;
    cout << "Erasing all numbers smaller than 300: " << endl;
    v.erase(remove_if(v.begin(), v.end(), isLessThan),v.end());
    copy(v.begin(), v.end(), os);
    cout << endl << endl;
    sort(v.begin(), v.end(), pred);
    cout << "Sorted numbers descending:" << endl;
    copy(v.begin(), v.end(), os);

   

    
    //copy(v.begin(), v.end(), os);

}
