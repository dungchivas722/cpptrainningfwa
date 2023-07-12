#ifndef FRESHER_H
#define FRESHER_H

#include "Employee.h"

class Fresher : public Employee
{
    private:
        string gradDate;
        string gradRank;
        string education;
    
    public:
        Fresher();
        ~Fresher();

        void enterEmployee() override;
        void showEmployee() override;
};

#endif /* FRESHER_H */