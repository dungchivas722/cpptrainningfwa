#include "Student.h"

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

void Student :: addResult(const Result& result) 
{
    results.push_back(result);
}

// float Student :: calculateGPA(const string& semester)
// {
//     float totalCredits = 0;
//     float totalScore = 0;

//     for (const Result& result : results) {
//         if (result.getSemester() == semester) {
//             totalScore += result.getGPA();
//             totalCredits++;
//         }
//     }

//     if (totalCredits > 0) {
//         return totalScore / totalCredits;
//     }

//     return 0;
// }

void Student :: enterStudent() 
{
    cout << "Enter student ID: ";
    cin >> id;
    cout << "Enter full name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter birth date: ";
    cin >> birthDate;
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
    cout << "Results: " << endl;
    for (Result result : results) 
    {
        result.showResult();
    }
}