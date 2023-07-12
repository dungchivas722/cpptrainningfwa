#ifndef INSERVICE_H
#define INSERVICE_H

#include "Student.h"

class InserviceStudent : public Student
{
    private:
        string location;
    
    public:
        InserviceStudent();
        InserviceStudent(string id, string name, string birthDate, int admissionYear, float entranceScore, string location);
        ~InserviceStudent();

        string getLocation();
        void enterStudent() override;
        void showStudent() override;

        int isRegular() override;
};

#endif /* INSERVICE_H */
