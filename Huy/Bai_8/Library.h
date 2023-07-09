#ifndef __Library
#define __Library

#include<vector>
#include "Card.h"


class Library
{
    private:
    vector<Card> list_cards;
    public:
    void Add_Card();
    void Display();
    void Remove_Card();
    ~Library();

};
#endif