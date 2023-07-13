#ifndef REGULAR_H
#define REGULAR_H

#include "Student.h"

class RegularStudent : public Student
{
    private:
    
    public:
        RegularStudent();
        RegularStudent(string id, string name, string birthDate, int admissionYear, float entranceScore);
        ~RegularStudent();

        void enterStudent() override;
        void showStudent() override;

        int isRegular() override;
};

#endif /* REGULAR_H */
