#include "Student.h"

const char* birthdayException :: what() const throw() 
{
    return "Invalid birthday!";
}

const char* nameException :: what() const throw() 
{
    return "Invalid fullname!";
}

/* Syntax: dd/mm/yyyy */

bool isValidBirthday(const string& birthday) 
{
    regex birthdayPattern("^(0?[1-9]|[12][0-9]|3[01])/(0?[1-9]|1[0-2])/\\d{4}$");
    return regex_match(birthday, birthdayPattern);
}

bool isValidName(const string& fullname) 
{
    return (fullname.length() > 0);
}


Student :: ~Student()
{
    result_lists.clear();
}

string Student :: getName()
{
    return this->name;
}

float Student :: getEntranceScore()
{
    return this->entranceScore;
}

string Student :: getId()
{
    return this->id;
}

void Student :: setId(string id)
{
    this->id = id;
}

int Student :: getStudentType()
{
    return this->student_types;
}

void Student :: setStudentType(int type)
{
    this->student_types = type;
}

int Student :: getAdmissionYear()
{
    return this->admissionYear;
}

// float Student :: SemesterGPA(string& semester)
// {
//     for (StudentResult& result : result_lists) 
//     {
//         if (result.getSemester() == semester) {
//             return result.getGPA();
//         }
//     }
// }

void Student :: enterStudent() 
{
    /* Check valid name */

    do
    {
        cin.ignore();
        cout << "Enter fullname: ";
        getline(cin, name);

        try                                                 
        {
            if (false == isValidName(name)) 
            {
                throw nameException();
            }
        } 
        catch (const nameException& ex) 
        {
            cout << "Caught Exception: " << ex.what() << endl;
        }
    } 
    while (false == isValidName(name));

    /* Check valid date */

    do
    {
        cout << "Enter birthday (dd/mm/yyyy): ";
        cin >> birthDate;

        try 
        {
            if (false == isValidBirthday(birthDate))
            {
                throw birthdayException();
            }
        } 
        catch (const birthdayException& ex) 
        {
            cout << "Caught Exception: " << ex.what() << endl;
        }
    }
    while (false == isValidBirthday(birthDate));

    cout << "Enter admission year: ";
    cin >> admissionYear;

    cout << "Enter entrance score: ";
    cin >> entranceScore;
}

void Student :: addResult()
{
    StudentResult studentResult;
    int choice;   
    do
    {
        cout << "Enter Student Result!" << endl;
        cout << "1. Enter data" << endl;
        cout << "0. Escape" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case ENT:
            {
                studentResult.enterResult();
                result_lists.push_back(studentResult);
                break;
            }              
            
            case ESC:
            {
                cout << "End of enter Student Result!" << endl;
                break;
            }

            default:
            {
                cout << "Your choice is not valid";
                break;
            }
        }
    } 
    while (ESC != choice);
}

void Student :: showStudent()
{
    cout << "Student ID: " << id << endl;
    cout << "Full Name: " << name << endl;
    cout << "Birth Date: " << birthDate << endl;
    cout << "Admission Year: " << admissionYear << endl;
    cout << "Entrance Score: " << entranceScore << endl;
    cout << "Results: " << endl;
    for (StudentResult result : result_lists) 
    {
        result.showResult();
    }
}

float Student :: gpaMax()
{
    float tmpGpa = 0;
    for (StudentResult &res : result_lists)
    {
        if (res.getGPA() > tmpGpa)
        {
            tmpGpa = res.getGPA();
        }
    }
    return tmpGpa;
}

float Student::gpaLastest() 
{
    if (false == result_lists.empty()) 
    {
        return (result_lists.back()).getGPA();
    } 
    else 
    {
        return 0.0;
    }
}

bool compareAdmissionYear :: operator()(const shared_ptr<Student>& s1, const shared_ptr<Student>& s2) const 
{
    return (s1->getAdmissionYear() < s2->getAdmissionYear());
}

bool compareType :: operator()(const shared_ptr<Student>& s1, const shared_ptr<Student>& s2) const 
{
    return (s1->getStudentType() < s2->getStudentType());
}