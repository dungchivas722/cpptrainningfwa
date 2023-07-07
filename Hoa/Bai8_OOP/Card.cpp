#pragma once
#include "Card.h"
#include "Student.h"


Card :: Card() {

};

Card :: Card(string name, int age, string class_student, int idCard, string borrowDate, string returnDate, int bookNumber) : Student (name, age, class_student)
{
    this -> idCard = idCard;
    this -> borrowDate = borrowDate;
    this -> returnDate = returnDate;
    this -> bookNumber = bookNumber;
}

int Card :: getIdCard() {
    return idCard;
};

string Card :: getBorrowDate() {
    return borrowDate;
}

string Card :: getReturnDate() {
    return returnDate;
}

int Card :: getBookNumber() {
    return bookNumber;
}

void Card :: setIdCard(int IdCard) {
    this -> idCard = idCard;
}

void Card :: setBorrowDate(string borrowDate) {
    this -> borrowDate = borrowDate;
}

void Card :: setReturnDate(string returnDate) {
    this -> returnDate = returnDate;
}

void Card :: setBookNumber(int bookNumber) {
    this -> bookNumber = bookNumber;
}


Card :: ~Card() {

}