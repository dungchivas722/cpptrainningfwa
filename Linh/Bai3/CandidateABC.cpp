#include "CandidateABC.h"

CandidateA :: CandidateA(string canNumber, string name, string address, string priority)
    : Candidate(canNumber, name, address, priority){}

void CandidateA :: showCandidateInformation()
{
    Candidate :: showCandidateInformation();
    cout << "Block A: Toan - Ly - Hoa" << endl;
}

CandidateB :: CandidateB(string canNumber, string name, string address, string priority)
    : Candidate(canNumber, name, address, priority){}

void CandidateB :: showCandidateInformation()
{
    Candidate :: showCandidateInformation();
    cout << "Block B: Toan - Hoa - Sinh" << endl;
}

CandidateC :: CandidateC(string canNumber, string name, string address, string priority)
    : Candidate(canNumber, name, address, priority){}

void CandidateC :: showCandidateInformation()
{
    Candidate :: showCandidateInformation();
    cout << "Block C: Van - Su - Dia" << endl;
}