#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include "Regurlar.h"
#include "Inservice.h"
#include <memory>
#include <map>

#define GOOD 8.0

class Department
{
    private:
        string nameDepartment;
        vector <shared_ptr <Student>> studentList;

    public:
        Department();
        ~Department();

        bool checkID(string id);
        void addStudent();
        void deleteStudent();
        void showStudent();
        
        void numberOfRegular();
        void highestEntrance();
        void inserviceList();
        void lastest_8List();
        void gpaHighest();
        void arrangeList();
        void numberOfStudentsByYear();
};

#endif /* DEPARTMENT_H */