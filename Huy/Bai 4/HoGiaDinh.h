#ifndef __HoGiaDinh
#define __HoGiaDinh

#include "Nguoi.h"

class HoGiaDinh
{
    private:
    int number_of_member, apartment_number;
    public:
    vector<Nguoi> list_members;
    HoGiaDinh(int apartment_number, int number_of_member);
    void get_member();
    ~HoGiaDinh();
};

#endif