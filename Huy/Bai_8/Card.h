#ifndef __Card
#define __Card

#include "Student.h"

class Card 
{
    private:
    string cardId, bookId;
    int borrowDate,paymentDate;
    public:
    Student student;
    void setCard();
    void getCard();
    string getCardId();
    void setCardId(string cardId);
    void setborrowDate(int borrowDate);
    void setpaymentDate(int paymentDate);

};
#endif