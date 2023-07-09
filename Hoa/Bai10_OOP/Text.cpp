#include "Text.h"
#include <string>
Text::Text(){};
Text::Text(string txt) : txt(txt){};

 string Text ::getText() {
    return txt;
 }
void Text :: setText(string txt) {
    this ->txt = txt; 
}

int Text :: countCharA() {
    int cnt = 0;
    for (char c : txt) {
        if (tolower(c) == 'a') {
            cnt++;
        }
    }

    return cnt;
}
void Text :: normalizeText() {
    // Remove leading and trailing blanks
    while (!txt.empty() && txt.front() == ' ') {
        txt.erase(0, 1);
    }

    while (!txt.empty() && txt.back() == ' ') {
        txt.pop_back();
    }

    // Remove extra blank characters in between
    for (size_t i = 0; i < txt.length(); i++) {
        if (txt[i] == ' ' && txt[i + 1] == ' ') {
            txt.erase(i, 1);
            i--;
        }
    }
}