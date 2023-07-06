#ifndef LIBRARY_H
#define LIBRARY_H

#include "Card.h"
#include <vector>

class Library
{
    private:
        vector <Card> cardList;
    
    public:
        void addCard();
        void deleteCard();
        void showCard();
};

#endif /* LIBRARY_H */