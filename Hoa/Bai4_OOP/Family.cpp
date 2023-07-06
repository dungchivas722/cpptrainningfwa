//===============================================================
#pragma once
#include "Family.h"
#include "Person.h"
#include <iostream>
#include <string>
using namespace std; 
Family::Family() {
}
Family::Family(int num_people, int num_address) {
    this -> num_people = num_people;
    this -> num_address = num_address;
}
void Family::setNum_people(int num_people) {
    this -> num_people = num_people;
}
void Family::setNum_address(int num_address) {
    this -> num_address = num_address;
}
int Family::getNum_people () {
    return num_people;
}
int Family::getNum_address () {
    return num_address;
}
void Family::display () {
    cout << "ID address: " << getNum_address() << endl;
    cout << "Number of people in family: " << getNum_people() << endl;
    for (int i = 0; i < Family::getNum_people(); i++) {
        listPeople[i]->display();
    }
}
//Add people to list people in family
void Family::Add_people() {
    for (int i = 0; i < Family::getNum_people(); i++) {
        string name; 
        int age; 
        string job; 
        int id_card_number;
        
        //Enter name
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);
        
        //Enter age
        cout << "Enter age: ";
        cin >> age;

        //Enter job
        cout << "Enter current job: ";
        cin.ignore();
        getline(cin, job);

        //Check ID_card number. Enter until true 
        bool checkId_card = true; 
        do {
            cout << "Enter ID card number: ";
            cin >> id_card_number;
            for (int i = 0; i < listPeople.size(); i++) {
                if ((listPeople[i])->getId_card_number() == id_card_number){
                    //Re-enter
                    cout << "ID card number existed, re-enter please!!!" << endl;
                    checkId_card = false;
                    break;
                }
            }
        }while (!checkId_card);

        // cout << "==========================================================";
        Person *person = new Person(name, age, job, id_card_number);
        listPeople.push_back(person);
    }
}

Family :: ~Family() {
    for (Person* x : listPeople) {
        if (x != NULL) {
            delete x; 
        }
    }
    listPeople.clear();
}