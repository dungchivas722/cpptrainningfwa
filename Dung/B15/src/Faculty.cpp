#include "Faculty.h"



Faculty::~Faculty()
{
    student_lists.clear();
}

bool Faculty :: checkID(string id)
{
    bool found = false;
    
    for (const auto &student : student_lists)
    {   
        if (student->getId() == id) 
        {
            found = true;
            break;
        }
    }

    return found;
}


void Faculty::addStudent()
{
      int choice;
    do
    {
        cout <<RELUGAR_STUDENT<< ". Add a Regular Student " << endl;
        cout <<INSERVICE_STUDENT<<". Add a Inservice Student" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        string id;

        switch (choice) 
        {
            case RELUGAR_STUDENT: 
            {
                /* Enter and check ID */
                cout << "Enter ID: ";
                cin >> id;
                if (true == checkID(id))
                {
                    cout << "This ID already exists" << endl;
                    break;
                }
                
    
                shared_ptr <Student> tmpStudent = make_shared <RegularStudent> ();

                /* Set ID, type of student and enter student's information */

                tmpStudent->setId(id);
                tmpStudent->setStudentType(RELUGAR_STUDENT);
                tmpStudent->enterStudent();
                student_lists.push_back(tmpStudent);
                break;
            }

            case INSERVICE_STUDENT: 
            {
                /* Enter and check ID */
                cout << "Enter ID: ";
                cin >> id;
                if (true == checkID(id))
                {
                    cout << "This ID already exists" << endl;
                    break;
                }
                
    
                shared_ptr <Student> tmpInserviceStudent = make_shared <InserviceStudent> ();

                /* Set ID, type of student and enter student's information */

                tmpInserviceStudent ->setId(id);
                tmpInserviceStudent ->setStudentType(INSERVICE_STUDENT);
                tmpInserviceStudent ->enterStudent();
                student_lists.push_back(tmpInserviceStudent);
                break;
            }

            default:
                cout << "Your choice is not valid!" << endl;
                break;
        }
    } 
    while ((RELUGAR_STUDENT != choice) && (INSERVICE_STUDENT != choice));
}

void Faculty::showStudent()
{
    int i = 1;
    cout << endl;
    cout << "There are " << student_lists.size() << " student!" <<endl;
    for (const auto &student :student_lists)
    {
        cout << endl;
        cout << "Student " << i++ << "." << endl;
        student->showStudent();
        cout << endl;
    }
}

void Faculty::showRelugarStudent()
{
    int count = 0;
    for (const auto &student : student_lists)
    {
        if ((RELUGAR_STUDENT == student->getStudentType()))
        {
            ++count;
            student->showStudent();
            cout << endl;
        }

    }

    if (0 == count)
    {
        cout << "There are no relugar student" << endl;
    }
    else 
    {
        cout << "Number of regular student: " << count << endl;
    }
}

void Faculty :: deleteStudent()
{
    string id;
    cout << "Enter student's ID: ";
    cin >> id;

    bool found = false;
          for(std::vector<std::shared_ptr<Student>>::size_type i = 0; i < student_lists.size(); i++)
    {
		if(student_lists[i]->getId() == id)
		{
           student_lists.erase(student_lists.begin() + i);	
           cout << "Successfully deleted! \n";
           found = true;
		}
    } 

    if (false == found)
    {
        cout << "Not found student with id: " << id << endl;
        cout << "_____________________________" << endl;
    }
}

void Faculty::showStudentHighestEntranceScore()
{
    float maxEntranceScore = 0.0; 
    string nameStudenthighestScore;
    for (const auto &student : student_lists)
    {
        float currentEntranceScore = student->getEntranceScore();
        
        if (currentEntranceScore > maxEntranceScore)
        {
            maxEntranceScore = currentEntranceScore;
            nameStudenthighestScore = student->getName();
        }
    }

    cout << "Student with highest entrance score:" << endl;
    cout << "Name: " << nameStudenthighestScore << endl;
    cout << "Entrance Score: " << maxEntranceScore << endl;
}

void Faculty :: inserviceList()
{
    string tmpLocation;
    cout << "Enter training location: ";
    getline(cin, tmpLocation);

    for (const auto &stu : student_lists)
    {
        if ((nullptr != stu) && (INSERVICE_STUDENT == stu->getStudentType()))
        {
            shared_ptr<InserviceStudent> inserviceStu = dynamic_pointer_cast<InserviceStudent>(stu);
            if (inserviceStu->getTrainingPlaces() == tmpLocation)
            {
                stu->showStudent();
            }
        }
    }
}

void Faculty :: lastest_8List()
{
    for (const auto &stu : student_lists)
    {
        if ((nullptr != stu) && (stu->gpaLastest() >= GOOD))
        {
            stu->showStudent();
        }
    }
}

void Faculty :: gpaHighest()
{
    float tmpGpaMax = 0;
    for (const auto &stu : student_lists)
    {
        if ((nullptr != stu) && (stu->gpaMax() > tmpGpaMax))
        {
            tmpGpaMax = stu->gpaMax();
        }
    }

    for (const auto &stu : student_lists)
    {
        if ((nullptr != stu) && (stu->gpaMax() == tmpGpaMax))
        {
            cout << "GPA max: " << tmpGpaMax << endl;
            stu->showStudent();
        }
    }
}

void Faculty :: arrangeList()
{
    sort(student_lists.begin(), student_lists.end(), compareType());
    sort(student_lists.begin(), student_lists.end(), compareAdmissionYear());
    Faculty :: showStudent();
}

void Faculty :: numberOfStudentsByYear()
{
    map <int, int> countStu;

    for (const auto& stu : student_lists) 
    {
        int admissionYear = stu->getAdmissionYear();
        countStu[admissionYear]++;
    }

    for (const auto& pair : countStu) 
    {
        cout << "Year " << pair.first << ": " << pair.second << " students" << endl;
    }
}


