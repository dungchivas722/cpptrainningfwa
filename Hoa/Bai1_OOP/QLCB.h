#ifndef QLCB_H
#define QLCB_H

#include <vector>
#include <memory>
#include "CanBo.h"

enum Job 
{
    WORKER = 1,
    ENGINEER = 2, 
    STAFF = 3
};

class QLCB{
    private:
        // vector<CanBo*> canBoList;
        vector<shared_ptr <CanBo>> canBoList;
        // vector <unique_ptr<CanBo>> canBoList;

    public:
        void addOfficer();
        void searchByName(string name);
        void printList();
        void escape();
};

#endif /* QLCB_H */
