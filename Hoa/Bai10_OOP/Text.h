#ifndef TEXT_H
#define TEXT_H

#include <iostream>
#include <string> 
#include <vector>
#include <sstream>

#include <string>
using namespace std; 
class Text {
    private: 
        string txt; 
    public:
        Text();
        Text(string txt);
        
        string getText();
        void setText(string txt);

        int countCharA();
        void normalizeText();
};

#endif