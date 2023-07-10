#include "Card.h"

void Card::setCard()
{
    student.setStudent();
    cout << "Nhap ID sach muon muon: ";
    cin >> bookId ;
}

void Card:: getCard()
{
    cout << "Sinh vien muon sach: \n";
    student.getStudent();
    cout <<"Ngay muon sach: " << borrowDate << "\t\t Ngay tra sach: " << paymentDate << "\n";
    cout << "ID sach: " << bookId << "\n";
    cout << "ID phieu muon: " << cardId << "\n";
}

string Card:: getCardId()
{
    return this->cardId;
}

void Card:: setCardId(string cardId)
{
    this->cardId =cardId;
}

void Card:: setborrowDate(int borrowDate)
{
    this->borrowDate = borrowDate;
}

void Card:: setpaymentDate(int paymentDate)
{
    this->paymentDate = paymentDate;
}