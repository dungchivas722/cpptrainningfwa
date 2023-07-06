#ifndef CANDIDATEABC_H
#define CANDIDATEABC_H

#include "Candidate.h"

class CandidateA : public Candidate
{
    public:
        CandidateA(string canNumber, string name, string address, string priority);
        void showCandidateInformation() override;
};

class CandidateB : public Candidate
{
    public:
        CandidateB(string canNumber, string name, string address, string priority);
        void showCandidateInformation() override;
};

class CandidateC : public Candidate
{
    public:
        CandidateC(string canNumber, string name, string address, string priority);
        void showCandidateInformation() override;
};

#endif /* CANDIDATEABC_H */