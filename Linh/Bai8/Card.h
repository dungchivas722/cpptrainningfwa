#ifndef CARD_H
#define CARD_H

#include "Student.h"
#include <vector>

class Card
{
    private:
        Student student;
        string id;
        int borrowDate;
        int paymentDate;
        int bookId;
        // vector <int> bookId;

    public:
        Card();
        Card(Student student, string id, int borrowDate, int paymentDate, int bookId);
        ~Card();

        void setStudent(Student student);
        Student getStudent();
        // const Student& getStudent();
        string getId();
        void setId(string id);
        int getBorrowDate();
        void setBorrowDate(int borrowDate);
        int getPaymentDate();
        void setPaymentDate(int paymentDate);
        int getBookId();
        void setBookId(int bookId);

        void showStudentCard();
        
};

#endif /* CARD_H */