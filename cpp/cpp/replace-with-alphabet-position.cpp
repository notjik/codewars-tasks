#include <iostream>
#include <string>
#include <cctype>
#include "replace-with-alphabet-position.h"

using namespace std;

char tolower(char c)
{
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
    return c;
}

string alphabet_position(const string& text)
{
    string text_nconst = "";
    for (string::size_type i = 0; i < text.size(); i++) {
        if (isalpha(tolower(text[i]))) text_nconst.push_back(tolower(text[i]) - 'a' + 1);
    }
    if (text_nconst.empty()) return "";
    string res = "";
    int tmp;
    for (string::size_type i = 0; i < text_nconst.size() - 1; i++) {
        tmp = text_nconst[i];
        res += to_string(tmp) + " ";
    }
    res += to_string(text_nconst[text_nconst.size() - 1]);
    return res;
}
