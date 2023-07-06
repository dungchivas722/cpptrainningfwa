#ifndef KYSU_H
#define KYSU_H

#include "CanBo.h"

using namespace std;

class KySu : public CanBo
{
    private:
        string major;

    public:
        KySu(string name, int age, string gender, string address, string major);
        void setMajor(string major);
        string getMajor();
        void enterInformation() override;
        void showInformation() const override;
};

#endif /* KYSU_H */