#ifndef CERTIFICATE_H
#define CERTIFICATE_H

#include <iostream>
#include <string.h>
#include <vector>
#include <regex>
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