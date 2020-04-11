#include "Header.h"


void result(int players)
{
    deck ndeck;
    if (players == 2)
    {
        Player first;
        Player second;
        cout << "upisite imena 2 igraca" << endl;
        cin >> first.Name;
        cin >> second.Name;
        ndeck.shuffle();
        first.cards = ndeck.getcards();
        second.cards = ndeck.getcards();
        first.akuza(first.cards);
        second.akuza(second.cards);
        cout << first.Name << " ima :" << first.brbod << "bodova od akuze." << endl;
        cout << second.Name << " ima :"<< second.brbod << "bodova od akuze." << endl;
    }
    if (players == 4)
    {
        Player first;
        Player second;
        Player third;
        Player fourth;
        cout << "upisite imena 4 igraca" << endl;
        cin >> first.Name;
        cin >> second.Name;
        cin >> third.Name;
        cin >> fourth.Name;
        ndeck.shuffle();
        first.cards = ndeck.getcards();
        second.cards = ndeck.getcards();
        third.cards = ndeck.getcards();
        fourth.cards = ndeck.getcards();
        first.akuza(first.cards);
        second.akuza(second.cards);
        third.akuza(third.cards);
        fourth.akuza(fourth.cards);
        cout << first.Name << " ima :" << first.brbod << "bodova od akuze" << endl;
        cout << second.Name << " ima :" << second.brbod << "bodova od akuze" << endl;
        cout << third.Name << " ima :" << third.brbod << "bodova od akuze" << endl;
        cout << fourth.Name << " ima :" << fourth.brbod << "bodova od akuze" << endl;
        

    }



}


void Player::akuza(vector<card> Hand)
{
    int br=0,x=0,y=0,k=0;
    char kind[]{ 'B','K','S','D' };
    int arr[]{ 1,2,3 };
    int array[3][4] = {{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    while (x!=4) {
        char temp = kind[y];
        for (int i = 0; i < 10; i++)
        {
            if (Hand[i].number == 1 && Hand[i].kind==temp)
            {
                array[0][k] = 1;
                
            }
            else if (Hand[i].number == 2 && Hand[i].kind == temp)
            {
                array[1][k] = 1;
            }
            else if (Hand[i].number == 3 && Hand[i].kind == temp)
            {
                array[2][k] = 1;
            }
            
        }
        k++;
        x++;
        y++;
    }

    for (int i = 0; i < 4; i++)
    {
        if (array[0][i] == 1 && array[1][i] == 1 && array[2][i] == 1)
        {
            br += 3;
        }
    }
    int counter = 0;
    for (int i = 0; i < 3; i++)
    {
        counter = 0;
        if (array[i][0] == 1)
            counter++;
        if (array[i][1] == 1)
            counter++;
        if (array[i][2] == 1)
            counter++;
        if (array[i][3] == 1)
            counter++;
        if (counter == 3)
        {
            if (counter == 4) {
                br += 4;
            }
            else {
                br += 3;
            }
        }
           
    }
   /*
    for (int p = 0; p < 3; p++)
    {
        for (int o = 0; o < 4; o++)
        {
            cout << "Element at x[" << p
                << "][" << o << "]: ";
            cout << array[p][o] << endl;
        }
    }
    */
    
    brbod = br;
}

card deck::getcard()
{
        return Cards[currentCard++];
}

vector<card> deck::getcards()
{
    vector<card> hand;
    for (int i = 0; i < 10; i++)
    {
        hand.push_back(getcard());
    }
    return hand;
}

void deck::shuffle()
{
    currentCard = 0;
    for (int i = 0; i < Cards.size(); i++)
    {
        int j = (rand() + time(0)) % Cards.size();
        card temp = Cards[i];
        Cards[i] = Cards[j];
        Cards[j] = temp;
    }
}

card::card(int num, char kind)
{
    number = num;
    this->kind = kind;
}

deck::deck()
{
    
    int i = 0, j = 0, Cnum = 1;
    char kinds[]{ 'B','K','S','D' };
    for (i = 0; i < 4; i++)//kreiranje spila
    {
        for (j = 1; j <= 10; j++)
        {
            Cnum = j;
            if (j > 7)
                Cnum += 3;
            Cards.push_back(card(Cnum, kinds[i]));// card Ncard=card(Cnum,kinds[i]);
        }
    }
}

 void deck::printdeck() const
{
    int i;

    for (i = 0; i < 40; i++) {

        cout << Cards[i].number;
        cout << Cards[i].kind;
        cout << endl;
    }
}



 void Player::printhand() const
 {
     for (int i = 0; i < 10; i++)
     {
         cout << cards[i].number;
         cout << cards[i].kind;
         cout << endl;

     }
 }