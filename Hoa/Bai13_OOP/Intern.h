#ifndef INTERN_H
#define INTERN_H

#include "Employee.h"

class Intern : public Employee
{
    private:
        string major;
        string semester;
        string uniName;
    
    public:
        Intern();
        Intern(string major, string semester, string uniName);
        ~Intern();

        void enterEmployee() override;
        void showEmployee() override;
};

#endif /* INTERN_H */