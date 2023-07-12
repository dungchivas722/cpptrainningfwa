#ifndef __Certificate
#define __Certificate

#include <iostream>
#include <string>

using namespace std;

class Certificate{
    string cerID, cerName, cerRank, cerDate;
    public:
    Certificate();
    ~Certificate();
    void InputCertificate();
    void ShowCertificate();
};


#endif