#ifndef CARDS_H
#define CARDS_H
#include<vector>
#include <iostream>
#include <algorithm>
#include <random>
#include <chrono>
using namespace std;

void result(int);

class card
{
public:

    int number;
    char kind;
    card(int, char);
};


class deck
{
    
    vector<card> Cards;
    int currentCard = 0;
    inline card getcard();
public:
    deck();
    void shuffle();
    vector<card> getcards();
    void printdeck()const;
};

class Player
{
public:
    string Name;
    int brbod=0;
    vector<card> cards;
    void akuza(vector<card>);
    void printhand()const;
};


#endif // CARDS_H

