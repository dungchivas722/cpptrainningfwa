#ifndef MANAGEEMPLOYEE_H
#define MANAGEEMPLOYEE_H

#include "Employee.h"
#include "Intern.h"
#include "Fresher.h"
#include "Experience.h"

#include <vector>
#include <memory>

/* Type of employee */

enum empl_type
{
    INTERN = 2,
    FRESHER = 1, 
    EXPERIENCE = 0
};

class ManageEmployee
{
    private:
        // vector <Employee*> employeeList;
        vector <shared_ptr <Employee>> employeeList; /* List of employees */

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