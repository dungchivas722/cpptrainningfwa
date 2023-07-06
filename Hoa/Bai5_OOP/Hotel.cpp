#include "Hotel.h"
#pragma once
#include <iostream>
#include <string>
#include <vector>
#define ROOM_A 1 
#define ROOM_B 2
#define ROOM_C 3 

using namespace std; 

Hotel::Hotel() {}

void Hotel :: add_Customer() {
    string name; 
    int age; 
    int add_Id_card_number; 
    int cost_type_room; 
    int num_ren_day; 
    
    cout << "Enter customer's name: "; 
    cin.ignore();
    getline(cin,name);

    cout << "Enter age: ";
    cin >> age;

    //Enter and check ID card number    
    bool check_add_Id_card_number = true; 
    do {
        cout << "Enter ID card number: ";
        cin >> add_Id_card_number;
        for (int i = 0; i < listCustomer.size(); i++) {
            if (listCustomer[i]->getId_card_number()==add_Id_card_number) {
                cout << "ID card number existed. Please re-enter!!!" << endl;
                check_add_Id_card_number = false; 
                break;
            }
        }
    }
    while (!check_add_Id_card_number);

    //Choose type room and enter
    bool check_room_add_Id_card_number;
    int choice; 
    do {
    cout << "Choose type room:" << endl;
    cout << "1. Room A 500$   2. Room B 300$   3. Room C 100$" << endl;
    cout << "Customer's choice: ";
    check_room_add_Id_card_number = false;
    cin >> choice; 
    switch (choice)
    {
    case ROOM_A: 
        cost_type_room = 500; 
        break;
    case ROOM_B:
        cost_type_room = 300;
        break;
    case ROOM_C:
        cost_type_room = 100;
        break;
    default:
        check_room_add_Id_card_number = true;
        cout << "Re-enter!!!!" << endl;
        break;
    }
    }
    while(check_room_add_Id_card_number);

    //Enter rental day 
    cout << "Enter rental day: ";
    cin >> num_ren_day;

    Person *person = new Person(name, age, add_Id_card_number, cost_type_room, num_ren_day);
    listCustomer.push_back(person);
}


void Hotel :: delete_Customer(){
    int Del_Id_card_number;
    cout << "Enter ID card number to be deleted: ";
    cin >> Del_Id_card_number;
    bool check_Del_Id_card_number = true; 
    for (int i = 0; i < listCustomer.size(); i++) {
        if (listCustomer[i]->getId_card_number() == Del_Id_card_number) {
            if (listCustomer[i] != NULL) {
                delete(listCustomer[i]);
            }
            listCustomer.erase(listCustomer.begin()+i);
            cout << "Deleted!!"<<endl;
            check_Del_Id_card_number = false;
            break;
        }
    }
}


void Hotel :: calculate_Payment(){
    int bill_Id_card_number;
    cout << "Enter ID card number need to pay: ";
    cin >> bill_Id_card_number;
    int totalBill;
    bool check_bill_Id_card_number = true;
    for (int i = 0; i < listCustomer.size(); i++) {
        if (listCustomer[i]->getId_card_number() == bill_Id_card_number) {
            totalBill = listCustomer[i]->getCost_type_room() * listCustomer[i]->getNum_rent_day();
            cout << "Need be pay: " << totalBill << " $" << endl;
            check_bill_Id_card_number = false;
            break;
        }
        if ((listCustomer[i]->getId_card_number() == bill_Id_card_number) && (check_bill_Id_card_number = false)) {
            cout << "ID card number don't exist!!!!" << endl;
        }
    }
}

void Hotel :: exitProgram(){
    for (int i = 0; i < listCustomer.size(); i++) {
        delete(listCustomer[i]);
    }
    listCustomer.clear();
    exit(0);
}