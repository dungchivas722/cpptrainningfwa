#ifndef CONGNHAN_H
#define CONGNHAN_H

#include "CanBo.h"

using namespace std;

class CongNhan : public CanBo
{
    private:
        int level;

    public:
        CongNhan(string name, int age, string gender, string address, int level);
        void setLevel(int level);
        int getLevel();
        void enterInformation() override;
        void showInformation() const override;
};

#endif /* CONGNHAN_H */