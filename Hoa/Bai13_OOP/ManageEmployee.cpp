#include "ManageEmployee.h"

ManageEmployee :: ManageEmployee(){}

ManageEmployee :: ~ManageEmployee()
{
    
}

/* Check for existence of id */

bool ManageEmployee :: checkID(string id)
{
    bool found = false;
    // for (Employee *x : employeeList)
    for (const auto &employee : employeeList)
    {   
        if ((NULL != employee) && (employee->getID() == id)) /* Check x NULL */
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
                
                // Employee* tmpIntern = new Intern();
                shared_ptr <Employee> tmpIntern = make_shared <Intern> ();

                /* Set ID, type of employee and enter employee's information */

                tmpIntern->setID(id);
                tmpIntern->setEmployeeType(INTERN);
                tmpIntern->enterEmployee();
                employeeList.push_back(tmpIntern);
                // tmpIntern->setEmployeeCount(employeeList.size());
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

                // Employee* tmpFresher = new Fresher();
                shared_ptr <Employee> tmpFresher = make_shared <Fresher> ();

                /* Set ID, type of employee and enter employee's information */

                tmpFresher->setID(id);
                tmpFresher->setEmployeeType(FRESHER);
                tmpFresher->enterEmployee();
                employeeList.push_back(tmpFresher);
                // tmpFresher->setEmployeeCount(employeeList.size());
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

                // Employee* tmpExperience = new Experience();
                shared_ptr <Employee> tmpExperience = make_shared <Experience> ();

                /* Set ID, type of employee and enter employee's information */

                tmpExperience->setID(id);
                tmpExperience->setEmployeeType(EXPERIENCE);
                tmpExperience->enterEmployee();
                employeeList.push_back(tmpExperience);
                // tmpExperience->setEmployeeCount(employeeList.size());
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
        if ((NULL != employee) && (employee->getID() == id))    /* If ID exists -> Delete Cetificate */
        {                                                       /* Enter employee's information */
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

    for (auto it = employeeList.begin(); it != employeeList.end();)
    {   
        if ((NULL != (*it)) && (*it)->getID() == id)            /* If ID exists -> Delete employee */
        {                                                       
            found = true;
            // delete(*it);
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
    int number_employee_in_list = 1;
    cout << endl;
    cout << "There are " << employeeList.size() << " employee!" <<endl;
    for (const auto &employee : employeeList)
    {
        cout << endl;
        cout << "Employee " << number_employee_in_list++ << "!" << endl;
        employee->showEmployee();
        // x->getEmployeeCount();
        cout << endl;
    }
}

void ManageEmployee :: findIntern()
{
    int number_employee_in_list = 0;
    for (const auto &employee : employeeList)
    {
        if ((NULL != employee) && (INTERN == employee->getEmployeeType()))
        {
            cout << endl;
            cout << "Employee " << ++number_employee_in_list << "!" << endl;
            employee->showEmployee();
            cout << endl;
            // number_employee_in_list++;
        }
    }

    if (0 == number_employee_in_list)
    {
        cout << "There are no intern" << endl;
    }
}

void ManageEmployee :: findFresher()
{
    int number_employee_in_list = 0;
    for (const auto &employee : employeeList)
    {
        if ((NULL != employee) && (FRESHER == employee->getEmployeeType()))
        {
            cout << endl;
            cout << "Employee " << ++number_employee_in_list << "!" << endl;
            employee->showEmployee();
            cout << endl;
            // number_employee_in_list++;
        }
    }

    if (0 == number_employee_in_list)
    {
        cout << "There are no fresher" << endl;
    }
}

void ManageEmployee :: findExperience()
{
    int number_employee_in_list = 0;
    for (const auto &employee : employeeList)
    {
        if ((NULL != employee) && (EXPERIENCE == employee->getEmployeeType()))
        {
            cout << endl;
            cout << "Employee " << ++number_employee_in_list << "!" << endl;
            employee->showEmployee();
            cout << endl;
            // number_employee_in_list++;
        }
    }

    if (0 == number_employee_in_list)
    {
        cout << "There are no experience" << endl;
    }
}