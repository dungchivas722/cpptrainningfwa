#include "hotel.h"

void Hotel::addRenter() {
    Person tmpPerson;
    int rentDays_;
    string typeRoom_;
    string personID_;

    tmpPerson.enterInformation();

    bool found;
    do {
        cout << "Renter's personal identification: ";
        cin >> personID_;
        found = false;
        for (Person x : renterList) {
            if (x.getPersonID() == personID_) {
                found = true;
                cout << endl;
                cout << "Number found!" << endl;
                break;
            }
        }
    } while (found);
    tmpPerson.setPersonID(personID_);
    cout << "Number of rent days: ";
    cin >> rentDays_;
    tmpPerson.setRentDays(rentDays_);
    int choice;
    do {
        cout << "Type of room: " << endl;
        cout << "1. Room A press 1" << endl;
        cout << "2. Room B press 2" << endl;
        cout << "3. Room C press 3" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case ROOMA: {
                typeRoom_ = 'A';
                break;
            }
            case ROOMB: {
                typeRoom_ = 'B';
                break;
            }
            case ROOMC: {
                typeRoom_ = 'C';
                break;
            }
            default: {
                cout << "Your choice is not valid!" << endl;
                break;
            }
        }
    } while (choice != ROOMA && choice != ROOMB && choice != ROOMC);
    tmpPerson.setTypeRoom(typeRoom_);
    renterList.push_back(tmpPerson); // thêm vào cuối vector tmpPerson
}

void Hotel::deleteRenter() {
    string personID_;
    cout << "Enter the identification number you want to delete: ";
    cin >> personID_;
    cout << endl;
    cout << "Search result by identification number!" << endl;

    bool found = false;
    for (auto it = renterList.begin(); it != renterList.end(); it++) {  // duyệt từ đầu đến cuối vector :)))
        if (it->getPersonID() == personID_) {
            found = true;
            cout << endl;
            cout << " was delete!" << endl;
            renterList.erase(it);
            break;
        }
    }

    if (!found) {
        cout << "was not found." << endl;
    }
}

void Hotel::calculateBill() {
    string personID_;
    cout << "Enter the identification number you want to calculate bill: ";
    cin >> personID_;
    cout << endl;
    cout << "Search result by identification number!" << endl;

    bool found = false;
    for (auto it = renterList.begin(); it != renterList.end(); it++) {
        if (it->getPersonID() == personID_) {
            found = true;
            cout << endl;
            if (it->getTypeRoom() == "A") {
                cout << "The bill: " << it->getRentDays() * 500 << endl;
            }
            if (it->getTypeRoom() == "B") {
                cout << "The bill: " << it->getRentDays() * 300 << endl;
            }
            if (it->getTypeRoom() == "C") {
                cout << "The bill: " << it->getRentDays() * 100 << endl;
            }
            break;
        }
    }

    if (!found) {
        cout << "Identification number was not found." << endl;
    }
}
void Hotel::showList() {
    for (Person x : renterList) {
        cout << "Infomation of renter" << endl;
        x.showInformationPerson();
        cout << endl;
    }
}
