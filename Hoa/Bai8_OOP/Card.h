#ifndef CARD_H
#define CARD_H
#include "Student.h"

class Card : public Student {
    private: 
        int idCard; //Mã phiếu mượn
        string borrowDate; //int
        string returnDate; //int
        int bookNumber; //Số hiệu sách
    public:
        Card();
        Card(string, int, string, int, string, string, int);

        int getIdCard();
        string getBorrowDate();
        string getReturnDate();
        int getBookNumber();

        void setIdCard(int idCard);
        void setBorrowDate(string borrowDate);
        void setReturnDate(string returnDate);
        void setBookNumber(int bookNumber);

        ~Card();
};

#endif