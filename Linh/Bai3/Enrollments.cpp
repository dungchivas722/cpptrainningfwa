#include "Enrollments.h"

void Enrollments :: addCandidate()
{
    string canNumber_;
    string name_;
    string address_;
    string priority_;
    string block_;
    int choice;

    cout << endl;
    cout << "Enter candidate information" << endl;
    cout << "Enter candidate number: ";
    getline(cin, canNumber_);

    for (Candidate *x : candidateList)
    {
        if (x->getCanNumber() == canNumber_)
        {
            cout << endl;
            cout << "This candidate already exists on the candidate list!" << endl;
            return;
        }
    }

    cout << "Enter name: ";
    getline(cin, name_);

    cout << "Enter address: ";
    getline(cin, address_);
    
    cout << "Enter priority: ";
    cin >> priority_;

    do
    {
        cout << endl;
        cout << "Select the block corresponding to the candidate's block" << endl;
        cout << "1. Block A press 1" << endl;
        cout << "2. Block B press 2" << endl;
        cout << "3. Block C press 3" << endl;

        cout << "Enter block: ";
        cin >> choice;
        switch (choice)
        {
        case BLOCKA:
            {
                CandidateA *canA = new CandidateA(canNumber_, name_, address_, priority_);
                candidateList.push_back(canA);
                break;
            }

        case BLOCKB:
            {
                CandidateB *canB = new CandidateB(canNumber_, name_, address_, priority_);
                candidateList.push_back(canB);
                break;
            }

        case BLOCKC:
            {
                CandidateC *canC = new CandidateC(canNumber_, name_, address_, priority_);
                candidateList.push_back(canC);
                break;
            }
        
        default:
            break;
        }
    }
    while((BLOCKA != choice) && (BLOCKB != choice) && (BLOCKC != choice));
}

void Enrollments :: showCandidateList()
{
    for (Candidate *x : candidateList)
    {
        cout << "_____________________________" << endl;
        x->showCandidateInformation();
        cout << endl;
    }
}

void Enrollments :: searchByCandidateNumber()
{
    string canNumber_;
    cout << "____________________________" << endl;
    cout << "Enter the candidate number you want to search: ";
    cin >> canNumber_;
    cout << endl;
    cout << "Search result by candidate number!" << endl;
    bool found = false;
    for (Candidate *x : candidateList)
    {   
        if (x->getCanNumber() == canNumber_)
        {
            found = true;
            x->showCandidateInformation();
            cout << "_____________________________" << endl;
        }
    }

    if (false == found)
    {
        cout << "Not found candidate with candidate number: " << canNumber_ << endl;
        cout << "_____________________________" << endl;
    }
}

void Enrollments :: escape()
{
    for (Candidate *x : candidateList) {
        if (NULL != x)
            delete x;
    }
    candidateList.clear();
    cout << "End of program!" << endl;
}