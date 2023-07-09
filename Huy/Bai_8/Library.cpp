#include "Library.h"

void Library::Add_Card()
{
   string cardId;
   int borrowDate,paymentDate;
   bool checkbookID, checkborrowDate, checkpaymentDate;

   Card card;
   card.setCard();

   do
   {
   cout << "Card ID: " ;
   cin >> cardId;
   checkbookID = false;
   for (int i = 0; i < list_cards.size(); i++)
   {
    if (list_cards[i].getCardId() == cardId)
    {
        checkbookID = true;
        cout << "Card ID da ton tai. Moi nhap lai! \n";
    }
   }
   } while (checkbookID);
   card.setCardId(cardId);

   do
   {
   cout << "Nhap ngay muon sach (ngay > 0): ";
   cin >> borrowDate;
   checkborrowDate = false;
   if(borrowDate <= 0)
   {
    cout << "Nhap khong hop le. Moi nhap lai!\n";
    checkborrowDate = true;
   }
   } while (checkborrowDate);
   card.setborrowDate(borrowDate);

   do
   {
   cout << "Nhap ngay tra sach (ngay > 0): ";
   cin >> paymentDate;
   checkpaymentDate = false;
   if(paymentDate <= 0)
   {
    cout << "Nhap khong hop le. Moi nhap lai!\n";
    checkpaymentDate = true;
   }
   } while (checkpaymentDate);

   if(paymentDate > borrowDate)
   {
    cout << "Canh bao: so ngay muon lon hon so ngay tra. Qua han !!! \n";
   }
   card.setpaymentDate(paymentDate);

   list_cards.push_back(card);   
   cout << "Them thanh cong !!!\n";
}

void Library::Display()
{
    cout << "/////////////////DANH SACH CAC PHIEU MUON SACH/////////////////\n";
    for(int i = 0; i < list_cards.size(); i++)
    {
        cout << i + 1 << ".\t\t";
        list_cards[i].getCard();
    }
}

void Library::Remove_Card()
{
    string cardId;
    bool checkcardId;
    do
    {
       cout << "Nhap Card ID:  ";
       cin >> cardId;
       checkcardId = false;

       for(int i = 0; i < list_cards.size(); i++) 
    {
		if(list_cards[i].getCardId() == cardId)
		{
           list_cards.erase(list_cards.begin() + i);	
           cout << "Da xoa thanh cong \n";
            checkcardId = true;
		}
    } 
    } while (!checkcardId);
}

Library::~Library()
{
    list_cards.clear();
}