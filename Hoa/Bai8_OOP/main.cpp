#include "Card.h"
#include "Card.cpp"
#include "Student.h"
#include "Student.cpp"

#include <vector>

#define ADD 1
#define DELETE 2
#define DISPLAY 3

int main() {
    vector <Card *> listCard; 
    int choice;
    Card *card; 
    string name; 
    int age; 
    string class_student;
    int idCard;
    string borrowDate;
    string returnDate; 
    bool check; 
    while (true) {
        cout << "=============================LIBRARY================================" << endl;
        cout << "1. Add new card      2. Delete card      3. Display Card Information" << endl;
        cin >> choice ;
        cout << "====================================================================" << endl;
        switch(choice){
            case ADD: 

            case DELETE:

            case DISPLAY:

            default: 
                break;
        }
    }
}