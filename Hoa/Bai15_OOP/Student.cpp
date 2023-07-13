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

Student :: Student(){}

Student :: Student(string id, string name, string birthDate, int admissionYear, float entranceScore)
    : id(id), name(name), birthDate(birthDate), admissionYear(admissionYear), entranceScore(entranceScore){}

Student :: ~Student()
{
    results.clear();
}

string Student :: getName()
{
    return this->name;
}

float Student :: getEntranceScore()
{
    return this->entranceScore;
}

void Student :: setID(string id)
{
    this->id = id;
}

string Student :: getID()
{
    return this->id;
}

int Student :: getAdmissionYear()
{
    return this->admissionYear;
}

void Student :: addResult() 
{
    Result tmpRes;
    int choice;
    do
    {
        cout << "Enter result!" << endl;
        cout << "1. Enter data" << endl;
        cout << "0. Escape" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case ENT:
            {
                tmpRes.enterResult();
                results.insert(tmpRes);
                break;
            }              
            
            case ESC:
            {
                cout << "End of enter result" << endl;
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

void Student :: showResult()
{
    for (Result result : results)
    {
        cout << endl;
        result.showResult();
    }
}

void Student :: deleteResult()
{
    results.clear();
}

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

void Student :: showStudent()
{
    cout << "Student ID: " << id << endl;
    cout << "Full Name: " << name << endl;
    cout << "Birth Date: " << birthDate << endl;
    cout << "Admission Year: " << admissionYear << endl;
    cout << "Entrance Score: " << entranceScore << endl;
    if (0 != results.size())
    {
        cout << "Results: " << endl;
    }
    
    for (Result result : results) 
    {
        result.showResult();
    }
}

float Student::gpaLastest() 
{
    if (false == results.empty()) 
    {
        return (*(--results.end())).getGPA();
    } 
    else 
    {
        return 0.0;
    }
}

float Student :: gpaMax()
{
    float tmpGpa = 0;
    for (const Result &res : results)
    {
        if (res.getGPA() > tmpGpa)
        {
            tmpGpa = res.getGPA();
        }
    }
    return tmpGpa;
}



bool compareAdmissionYear :: operator()(const shared_ptr<Student>& s1, const shared_ptr<Student>& s2) const 
{
    return (s1->getAdmissionYear() < s2->getAdmissionYear());
}

bool compareType :: operator()(const shared_ptr<Student>& s1, const shared_ptr<Student>& s2) const 
{
    return (s1->isRegular() < s2->isRegular());
}