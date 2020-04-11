
#include "Header.h"


int main()
{
    int n;
    
    cout << "how many players,2 or 4? " << endl;
    cin >> n;
    if (n != 2 && n != 4)
    {
        cout << "nije moguc toliki broj igraca" << endl;
        
    }
    else
    {
        result(n);
    }
            
        
    

    return 0;
}
