#ifndef __CONGNHAN
#define __CONGNHAN

#include "CANBO.h"

class CongNhan: public CanBo
{
    int level;
    public:
    void add_office();
    void get_office();
};

#endif