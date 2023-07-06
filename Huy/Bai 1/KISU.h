#ifndef __KISU
#define __KISU

#include "CANBO.h"

class KiSu : public CanBo
{
    string major;
    public:
    void add_office();
    void get_office();
};

#endif