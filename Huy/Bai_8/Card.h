#ifndef __Card
#define __Card

#include "Student.h"

class Card : public Student
{
    private:
    string cardId, bookId;
    int borrowDate,paymentDate;
    public:
    void setCard();
    void getCard();
    string getCardId();
    void setCardId(string cardId);
    void setborrowDate(int borrowDate);
    void setpaymentDate(int paymentDate);

};
#endif