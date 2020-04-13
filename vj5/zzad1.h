#pragma once
#include<vector>
#include <iostream>
#include <algorithm>



using namespace std;


class card
{
    int number;
    char kind;

public:
    card();
    ~card();
    void setcardnum(int);
    void setcardkind(char);
    int getcardnum();
    char getcardkind();

    

};
