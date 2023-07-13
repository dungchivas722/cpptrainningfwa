#ifndef CERTIFICATE_H
#define CERTIFICATE_H

#include <iostream>

using namespace std;

class Certificate 
{
    private:
        string cerID;       /* ID, Name, Rank, Date of Certificate */
        string cerName;
        string cerRank;
        string cerDate;

    public:
        Certificate();
        Certificate(string cerID, string cerName, string cerRank, string cerDate);
        ~Certificate();

        /* 
            Enter and show Certificate
         */
        void enterCertificate();
        void showCertificate();
};

#endif /* CERTIFICATE_H */