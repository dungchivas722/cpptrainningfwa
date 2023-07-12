#include "Department.h"

Department :: Department(){}

Department :: ~Department(){}

bool Department :: checkID(string id)
{
    bool found = false;
    for (const auto &stu : studentList)
    {   
        if ((nullptr != stu) && (stu->getID() == id)) /* Check x nullptr */
        {
            found = true;
            break;
        }
    }

    return found;
}

void Department :: addStudent()
{
    int choice;
    do
    {
        cout << "1. Add a regular student" << endl;
        cout << "2. Add a inservice student" << endl;
        cout << "Enter your choice (1 - 2): ";
        cin >> choice;
        string id;

        switch (choice) 
        {
            case REGULAR: 
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

                shared_ptr <Student> tmpReg = make_shared <RegularStudent> ();

                /* Set ID, type of employee and enter employee's information */

                tmpReg->setID(id);
                tmpReg->enterStudent();
                studentList.push_back(tmpReg);
                break;
            }

            case INSERVICE: 
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
                shared_ptr <Student> tmpIns = make_shared <InserviceStudent> ();

                /* Set ID, type of employee and enter employee's information */

                tmpIns->setID(id);
                tmpIns->enterStudent();
                studentList.push_back(tmpIns);
                break;
            }

            default:
                cout << "Your choice is not valid!" << endl;
                break;
        }
    } 
    while ((REGULAR != choice) && (INSERVICE != choice));
}

void Department :: deleteStudent()
{
    string id;
    cout << "Enter student's ID: ";
    cin >> id;

    bool found = false;

    for (auto it = studentList.begin(); it != studentList.end();)
    {   
        if ((nullptr != (*it)) && (*it)->getID() == id)            /* If ID exists -> Delete employee */
        {                                                       
            found = true;
            it = studentList.erase(it);
            cout << endl;
            cout << "---------DELETED----------" << endl;
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

void Department :: showStudent()
{
    int i = 1;
    cout << endl;
    cout << "There are " << studentList.size() << " student!" <<endl;
    for (const auto &stu : studentList)
    {
        cout << endl;
        cout << "Student " << i++ << "!" << endl;

        if ((nullptr != stu) && (REGULAR == stu->isRegular()))
        {
            cout << "Regular student" << endl;
        }

        if ((nullptr != stu) && (INSERVICE == stu->isRegular()))
        {
            cout << "Inservice student" << endl;
        }

        stu->showStudent();
        
        cout << endl;
    }
}

void Department :: numberOfRegular()
{
    int count = 0;
    for (const auto &stu : studentList)
    {
        if ((nullptr != stu) && (REGULAR == stu->isRegular()))
        {
            ++count;
        }
    }
    cout << "Number of regular student: " << count << endl;
}

void Department :: highestEntrance()
{
    int entranceMAX = 0;
    for (const auto &stu : studentList)
    {
        if ((nullptr != stu) && (stu->getEntranceScore() > entranceMAX))
        {
            entranceMAX = stu->getEntranceScore();
        }
    }

    for (const auto &stu : studentList)
    {
        if ((nullptr != stu) && (stu->getEntranceScore() == entranceMAX))
        {
            stu->showStudent();
        }
    }
}

void Department :: inserviceList()
{
    string tmpLocation;
    cout << "Enter training location: ";
    getline(cin, tmpLocation);

    for (const auto &stu : studentList)
    {
        // if ((nullptr != stu) && (false == stu->isRegular()) && (stu->getLocation() == tmpLocation))
        if ((nullptr != stu) && (INSERVICE == stu->isRegular()))
        {
            shared_ptr<InserviceStudent> inserviceStu = dynamic_pointer_cast<InserviceStudent>(stu);
            if (inserviceStu->getLocation() == tmpLocation)
            {
                stu->showStudent();
            }
        }
        cout << endl;
    }
}

void Department :: lastest_8List()
{
    for (const auto &stu : studentList)
    {
        if ((nullptr != stu) && (stu->gpaLastest() >= GOOD))
        {
            cout << endl;
            stu->showStudent();
            cout << endl;
        }
    }
}

void Department :: gpaHighest()
{
    float tmpGpaMax = 0;
    for (const auto &stu : studentList)
    {
        if ((nullptr != stu) && (stu->gpaMax() > tmpGpaMax))
        {
            tmpGpaMax = stu->gpaMax();
        }
    }

    for (const auto &stu : studentList)
    {
        if ((nullptr != stu) && (stu->gpaMax() == tmpGpaMax))
        {
            cout << "GPA max: " << tmpGpaMax << endl;
            stu->showStudent();
        }
    }
}

void Department :: arrangeList()
{
    sort(studentList.begin(), studentList.end(), compareType());
    sort(studentList.begin(), studentList.end(), compareAdmissionYear());
    Department :: showStudent();
}

void Department :: numberOfStudentsByYear()
{
    map <int, int> countStu;

    for (const auto& stu : studentList) 
    {
        int admissionYear = stu->getAdmissionYear();
        countStu[admissionYear]++;
    }

    for (const auto& pair : countStu) 
    {
        cout << "Year " << pair.first << ": " << pair.second << " students" << endl;
    }
}