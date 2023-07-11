#include "QL.h"

ManageEmployee :: ManageEmployee(){}

ManageEmployee :: ~ManageEmployee()
{
    employeeList.clear();
}

/* Check for existence of id */

bool ManageEmployee :: checkID(string id)
{
    bool found = false;
    for (const auto &employee : employeeList)
    {   
        if ((employee->getID() == id))
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
                /* Enter and check ID */

                cout << endl;
                cout << "Enter ID: ";
                cin >> id;
                if (true == checkID(id))
                {
                    cout << "This ID already exists" << endl;
                    break;
                }
                shared_ptr <Employee> tmpIntern = make_shared <Intern> ();

                /* Set ID, type of employee and enter employee's information */

                tmpIntern->setID(id);
                tmpIntern->setEmployeeType(INTERN);
                tmpIntern->enterEmployee();
                tmpIntern->addEmployeeCount();
                employeeList.push_back(tmpIntern);
                break;
            }

            case FRESHER: 
            {
                /* Check ID */

                cout << "Enter ID: ";
                cin >> id;
                if (true == checkID(id))
                {
                    cout << "This ID already exists" << endl;
                    break;
                }

                shared_ptr <Employee> tmpFresher = make_shared <Fresher> ();

                /* Set ID, type of employee and enter employee's information */

                tmpFresher->setID(id);
                tmpFresher->setEmployeeType(FRESHER);
                tmpFresher->enterEmployee();
                tmpFresher->addEmployeeCount();
                employeeList.push_back(tmpFresher);
                break;
            }

            case EXPERIENCE: 
            {
                /* Check ID */

                cout << "Enter ID: ";
                cin >> id;
                if (true == checkID(id))
                {
                    cout << "This ID already exists" << endl;
                    break;
                }
                shared_ptr <Employee> tmpExperience = make_shared <Experience> ();

                /* Set ID, type of employee and enter employee's information */

                tmpExperience->setID(id);
                tmpExperience->setEmployeeType(EXPERIENCE);
                tmpExperience->enterEmployee();
                tmpExperience->addEmployeeCount();
                employeeList.push_back(tmpExperience);
                break;
            }

            default:
                cout << "Your choice is not valid!" << endl;
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
    for (const auto &employee : employeeList)
    {   
        if ((employee->getID() == id)) 
        {                                                       
            found = true;
            employee->deleteCertificate();
            employee->enterEmployee();
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
          for(int i = 0; i <employeeList.size(); i++) 
    {
		if(employeeList[i]->getID() == id)
		{
           employeeList.erase(employeeList.begin() + i);	
           cout << "Successfully deleted! \n";
           found = true;
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
    for (const auto &employee : employeeList)
    {
        cout << endl;
        cout << "Employee " << i++ << "." << endl;
        employee->showEmployee();
        cout << endl;
    }
}

void ManageEmployee :: findIntern()
{
    int count = 0;
    for (const auto &employee : employeeList)
    {
        if ((NULL != employee) && (INTERN == employee->getEmployeeType()))
        {
            cout << endl;
            cout << "Employee " << ++count << "!" << endl;
            employee->showEmployee();
            cout << endl;
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
    for (const auto &employee : employeeList)
    {
        if ((NULL != employee) && (FRESHER == employee->getEmployeeType()))
        {
            cout << endl;
            cout << "Employee " << ++count << "!" << endl;
            employee->showEmployee();
            cout << endl;
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
    for (const auto &employee : employeeList)
    {
        if ((NULL != employee) && (EXPERIENCE == employee->getEmployeeType()))
        {
            cout << endl;
            cout << "Employee " << ++count << "!" << endl;
            employee->showEmployee();
            cout << endl;
        }
    }

    if (0 == count)
    {
        cout << "There are no experience" << endl;
    }
}