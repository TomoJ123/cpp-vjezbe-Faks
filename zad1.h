#pragma once
#include<vector>
#include <iostream>
#include <string>


using namespace std;


class Player
{
    string Name;
    int brbod;
    //vector<card> cards; // koristeno sa klasom Deck a zadatak neobuhva�a tu klasu
public:
    Player();
    void setName(string);
    void setbrbod(int);
    string getName();
    int getbrbod();
    ~Player();
    
};