#include "ManageEmployee.h"

ManageEmployee :: ManageEmployee(){}

ManageEmployee :: ~ManageEmployee()
{
    for (Employee *x : employeeList)
    {
        if (NULL != x)
        {
            delete(x);
        }
    }
    employeeList.clear();
}

bool ManageEmployee :: checkID(string id)
{
    bool found = false;
    for (Employee *x : employeeList)
    {   
        if (x->getID() == id)
        {
            found = true;
            break;
        }
    }
    return found;
}

void ManageEmployee :: addEmployee()
{
    int choice;
    do
    {
        cout << "0. Add a experience employee" << endl;
        cout << "1. Add a fresher employee" << endl;
        cout << "2. Add a intern employee" << endl;
        cout << "Enter your choice (0 - 2): ";
        cin >> choice;
        string id;

        switch (choice) 
        {
            case INTERN: 
            {
                cout << endl;
                cout << "Enter ID: ";
                cin >> id;
                if (true == checkID(id))
                {
                    cout << "This ID already exists" << endl;
                    break;
                }
                
                Intern* tmpIntern = new Intern();
                tmpIntern->setID(id);
                tmpIntern->setEmployeeType(INTERN);
                tmpIntern->enterEmployee();
                employeeList.push_back(tmpIntern);
                // tmpIntern->setEmployeeCount(employeeList.size());
                break;
            }

            case FRESHER: 
            {
                cout << "Enter ID: ";
                cin >> id;
                if (true == checkID(id))
                {
                    cout << "This ID already exists" << endl;
                    break;
                }

                Fresher* tmpFresher = new Fresher();
                tmpFresher->setID(id);
                tmpFresher->setEmployeeType(FRESHER);
                tmpFresher->enterEmployee();
                employeeList.push_back(tmpFresher);
                // tmpFresher->setEmployeeCount(employeeList.size());
                break;
            }

            case EXPERIENCE: 
            {
                cout << "Enter ID: ";
                cin >> id;
                if (true == checkID(id))
                {
                    cout << "This ID already exists" << endl;
                    break;
                }

                Experience* tmpExperience = new Experience();
                tmpExperience->setID(id);
                tmpExperience->setEmployeeType(EXPERIENCE);
                tmpExperience->enterEmployee();
                employeeList.push_back(tmpExperience);
                // tmpExperience->setEmployeeCount(employeeList.size());
                break;
            }

            default:
                std::cout << "Your choice is not valid!" << std::endl;
                break;
        }
    } 
    while ((INTERN != choice) && (FRESHER != choice) && (EXPERIENCE != choice));
}

void ManageEmployee :: changeEmployee()
{
    string id;
    cout << "Enter employee's ID: ";
    cin >> id;

    bool found = false;
    for (Employee *x : employeeList)
    {   
        if (x->getID() == id)
        {
            found = true;
            x->deleteCertificate();
            x->enterEmployee();
            cout << "_____________________________" << endl;
            break;
        }
    }

    if (false == found)
    {
        cout << "Not found employee with id: " << id << endl;
        cout << "_____________________________" << endl;
    }
}

void ManageEmployee :: deleteEmployee()
{
    string id;
    cout << "Enter employee's ID: ";
    cin >> id;

    bool found = false;

    for (auto it = employeeList.begin(); it != employeeList.end();)
    {   
        if ((*it)->getID() == id)
        {
            found = true;
            delete(*it);
            it = employeeList.erase(it);
            cout << "_____________________________" << endl;
            break;
        }
        else
        {
            ++it;
        }
    }

    if (false == found)
    {
        cout << "Not found employee with id: " << id << endl;
        cout << "_____________________________" << endl;
    }
}

void ManageEmployee :: showList()
{
    int i = 1;
    cout << endl;
    cout << "There are " << employeeList.size() << " employee!" <<endl;
    for (Employee *x : employeeList)
    {
        cout << endl;
        cout << "Employee " << i++ << "!" << endl;
        x->showEmployee();
        // x->getEmployeeCount();
        cout << endl;
    }
}

void ManageEmployee :: findIntern()
{
    int count = 0;
    for (Employee *x : employeeList)
    {
        if (INTERN == x->getEmployeeType())
        {
            cout << endl;
            cout << "Employee " << ++count << "!" << endl;
            x->showEmployee();
            cout << endl;
            // count++;
        }
    }

    if (0 == count)
    {
        cout << "There are no intern" << endl;
    }
}

void ManageEmployee :: findFresher()
{
    int count = 0;
    for (Employee *x : employeeList)
    {
        if (FRESHER == x->getEmployeeType())
        {
            cout << endl;
            cout << "Employee " << ++count << "!" << endl;
            x->showEmployee();
            cout << endl;
            // count++;
        }
    }

    if (0 == count)
    {
        cout << "There are no fresher" << endl;
    }
}

void ManageEmployee :: findExperience()
{
    int count = 0;
    for (Employee *x : employeeList)
    {
        if (EXPERIENCE == x->getEmployeeType())
        {
            cout << endl;
            cout << "Employee " << ++count << "!" << endl;
            x->showEmployee();
            cout << endl;
            // count++;
        }
    }

    if (0 == count)
    {
        cout << "There are no experience" << endl;
    }
}