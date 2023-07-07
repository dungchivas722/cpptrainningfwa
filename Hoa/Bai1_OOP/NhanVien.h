#ifndef NHANVIEN_H
#define NHANVIEN_H

#include <iostream>
#include <string.h>
#include "CanBo.h"

using namespace std;

class NhanVien : public CanBo
{
    private:
        string task;

    public:
        NhanVien(string name, int age, string gender, string address, string task);
        void setTask(string task);
        string getTask();
        void enterInformation() override; 
        void showInformation() const override;
};

#endif /* NHANVIEN_H */