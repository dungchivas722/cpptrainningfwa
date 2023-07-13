#ifndef EXPERIENCE_H
#define EXPERIENCE_H

#include "Employee.h"

class Experience : public Employee
{
    private:
        int expInYear;
        string proSkill;
    
    public:
        Experience();
        Experience(int expInYear, string proSkill);
        ~Experience();

        void enterEmployee() override;
        void showEmployee() override;
};

#endif /* EXPERIENCE_H */