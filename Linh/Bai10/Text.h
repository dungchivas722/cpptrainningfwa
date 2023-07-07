#ifndef TEXT_H
#define TEXT_H

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

#endif /* TEXT_H */