#ifndef  __QLKS
#define  __QLKS

#include "KhachSan.h"
#include "Define.h"
class QLKS
{
    private:
    vector<KhachSan> list_rooms;
    public:
    void add_room();
    void show_room();
    void delete_ID_card();
    void Rent_Room();
    ~QLKS();

};
#endif