#include "InserviceStudent.h"

void InserviceStudent::enterStudent()
{
    Student::enterStudent();
    cout << "Enter Training Places: ";
    cin.ignore();
    getline(cin,TrainingPlaces);
    Student::addResult();
}

void InserviceStudent::showStudent()
{
    cout << "Training Places: " << TrainingPlaces << endl;
    Student::showStudent();
}

string InserviceStudent::getTrainingPlaces()
{
    return this->TrainingPlaces;
}