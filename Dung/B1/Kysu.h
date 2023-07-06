#ifndef KYSU_H
#define KYSU_H

#include "Canbo.h"

class kysu : public canbo{
    
    protected:
    string trainning_industry; // add trainning_industry for congnhan

    public:
    void nhapthongtin() override;
    void xuatthongtin() override;

};

#endif