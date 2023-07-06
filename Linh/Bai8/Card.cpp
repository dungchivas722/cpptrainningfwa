#include "Card.h"

Card :: Card(){}

Card :: Card(Student student, string id, int borrowDate, int paymentDate, int bookId)
    : student(student), id(id), borrowDate(borrowDate), paymentDate(paymentDate), bookId(bookId){}

Card :: ~Card(){}

Student Card :: getStudent()
{
    return this->student;
}

void Card :: setStudent(Student student) {
    this->student = student;
}

string Card :: getId() {
    return this->id;
}

void Card :: setId(string id) {
    this->id = id;
}

int Card :: getBorrowDate() {
    return this->borrowDate;
}

void Card :: setBorrowDate(int borrowDate) {
    this->borrowDate = borrowDate;
}

int Card :: getPaymentDate() {
    return this->paymentDate;
}

void Card :: setPaymentDate(int paymentDate) {
    this->paymentDate = paymentDate;
}

int Card :: getBookId() {
    return this->bookId;
}

void Card :: setBookId(int bookId) {
    this->bookId = bookId;
}

void Card :: showStudentCard()
{
    this->student.showStudent();
    cout << "ID: " << this->id << endl;
    cout << "Borrow date: " << this->borrowDate << endl;
    cout << "Payment date: " << this->paymentDate << endl;
    cout << "Book ID: " << this->bookId << endl;
}