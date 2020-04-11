#include<iostream>
#include <cmath>

using namespace std;
struct circle
{
    int r;
    int x;
    int y;

};

int fun(const circle (&a)[3],const circle &b)
{
    int counter=0;
    for(int k=0;k<3;k++)
    {
       if(sqrt(pow(a[k].x-b.x,2)+pow(a[k].y-b.y,2)) < (a[k].r + b.r))
       {
          counter++;
       }
      
       
    }

    return counter;
}


int main()
{
    
    circle a[3];
    cout << "unesite radijus x i y za 3 kruznice za usporedbu: ";
    for(int i=0;i<3;i++)
    {
     cin >> a[i].r;
     cin >> a[i].x;
     cin >> a[i].y;
    }


    circle b;
    cout << "unesite radijus x i y svoje kruznice za usporedbu:" << endl;
    cin >> b.r;
    cin >> b.x ;
    cin >> b.y ;
    int result=fun(a,b);
    cout << "sijece se njih:" << result ;
}