#ifndef INSERVICESTUDENT_H
#define INSERVICESTUDENT_H

#include "Student.h"

class InserviceStudent : public Student
{
    private:
    string TrainingPlaces;
    public:
    void enterStudent() override;
    void showStudent() override;

    string getTrainingPlaces();
};
#endif