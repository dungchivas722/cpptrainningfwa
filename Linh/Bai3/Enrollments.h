#ifndef ENROLLMENTS_H
#define ENROLLMENTS_H

#include <vector>
#include "CandidateABC.h"

enum Block
{
    BLOCKA = 1,
    BLOCKB = 2,
    BLOCKC = 3
};

class Enrollments
{
    private:
        vector <Candidate*> candidateList;

    public:
        void addCandidate();
        void showCandidateList();
        void searchByCandidateNumber();
        void escape();
};

#endif /* ENROLLMENTS_H */