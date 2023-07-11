#ifndef INTERN_H
#define INTERN_H

#include "Employee.h"

class Intern : public Employee
{
    private:
        string major;
        string semestor;
        string uniName;
    
    public:
        Intern();
        ~Intern();

        void enterEmployee() override;
        void showEmployee() override;
};

#endif /* INTERN_H */