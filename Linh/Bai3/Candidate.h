#ifndef CANDIDATE_H
#define CANDIDATE_H

#include <iostream>
#include <string.h>

using namespace std;

class Candidate
{
    protected:
        string canNumber;
        string name;
        string address;
        string priority;
        // string block;
    public:
        
        Candidate(string canNumber, string name, string address, string priority);
        virtual ~Candidate();

        void setCanNumber(string canNumber);
        string getCanNumber();
        void setName(string name);
        string getName();
        void setAddress(string address);
        string getAddress();
        void setPriority(string priority);
        string getPriority();
        // void setBlock(string block);
        // string getBlock();

        virtual void showCandidateInformation();
};

#endif /* CANDIDATE_H */