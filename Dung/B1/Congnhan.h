#ifndef CONGNHAN_H
#define CONGNHAN_H

#include "Canbo.h"

class congnhan : public canbo{
    
    protected:
    int level; // add level for congnhan

    public:
    void nhapthongtin() override;
    void xuatthongtin() override;

};

#endif