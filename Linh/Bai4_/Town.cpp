#include "Town.h"

Town :: Town(){}

// Town :: Town(vector <Household> households)
//     :households(households){}

void Town :: enterHousehold()
{
    int n;
    cout << "Enter the household number: ";
    cin >> n;
    // cin.ignore();

    int i;
    for (i = 0; i < n; i++) 
    {
        cout << "Enter the household " << i + 1 << ":" << endl;
        string address_;
        vector<Person> members_;

        cin.ignore();
        cout << "Enter address: ";
        getline(cin, address_);
        
        int choice;
        int j = 1;
        do
        {
            cout << endl;
            cout << "0. Exit press 0" << endl;
            cout << "1. Enter household member information press 1" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
                case ENTER:
                {
                    Person tmpPerson;
                    tmpPerson.enterPerson();

                    bool found = false;

                    for (Person x : members_)
                    {
                        if (x.getPersonID() == tmpPerson.getPersonID())
                        {
                            found = true;
                            cout << endl;
                            cout << "This member exists in list of people in the town!" << endl;
                            break;
                        }
                    }

                    for (Household x : households)
                    {
                        vector <Person> mem = x.getPerson();
                        for (Person y : mem)
                        {
                            if (y.getPersonID() == tmpPerson.getPersonID())
                            {
                                found = true;
                                cout << endl;
                                cout << "This member exists in list of people in the town!" << endl;
                                break;
                            }
                        }
                        if (true == found)
                        {
                            break;
                        }
                    }

                    if (true == found)
                    {
                        break;
                    }

                    members_.push_back(tmpPerson);
                    break;
                }
                case EXIT:
                {
                    cout << "Finish entering information!" << endl;
                    break;
                }
                default:
                {
                    cout << "Your choice is not valid!" << endl;
                }
            }
        } while (EXIT != choice);
        

        Household househ(members_, address_);
        households.push_back(househ);
    }
}
void Town :: showTown() const
{
    int i = 1;
    for (Household x : households) 
    {
        cout << "The household list number " << i++ << " in the town: " << endl;
        x.showHousehold();
        cout << "_________________________" << endl;
    }
}