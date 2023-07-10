#ifndef __KhachSan
#define __KhachSan

#include<vector>
#include"Nguoi.h"
class KhachSan
{
    private:
    int rental_day,numberRent;
	char kind_of_room;
    public:
    Nguoi nguoi;
    void SetRoom(int rental_day, char kind_of_room, int numberRent);
    void GetRoom();


};
#endif