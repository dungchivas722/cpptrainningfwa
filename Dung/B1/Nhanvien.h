#ifndef NHANVIEN_H
#define NHANVIEN_H

#include "Canbo.h"

class nhanvien : public canbo{
    
    protected:
    string work; // add work for nhanvien

    public:
    void nhapthongtin() override;
    void xuatthongtin() override;

};

#endif