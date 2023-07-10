#ifndef VANBAN_H
#define VANBAN_H

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

class Text
{
    private:
    
        string st;
    
    public:

        Text();
        Text(string st);
        ~Text();
        string getText();
        void setText(string st);
        void countA();
        void textNormalization();

};

#endif 