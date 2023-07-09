#ifndef MANAGEEMPLOYEE_H
#define MANAGEEMPLOYEE_H

#include "Employee.h"
#include "Intern.h"
#include "Fresher.h"
#include "Experience.h"

#include <vector>

enum empl_type
{
    INTERN = 2,
    FRESHER = 1, 
    EXPERIENCE = 0
};

class ManageEmployee
{
    private:
        vector <Employee*> employeeList;
    public:
        ManageEmployee();
        ~ManageEmployee();

        bool checkID(string id);
        void addEmployee();
        void changeEmployee();
        void deleteEmployee();
        void showList();
        void findIntern();
        void findFresher();
        void findExperience();
        
};

#endif /* MANAGEEMPLOYEE_H */