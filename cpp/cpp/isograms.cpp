#include <string>
#include <set>
#include "isograms.h"

/*
An isogram is a word that has no repeating letters, consecutive or non - consecutive.Implement a function that determines whether a string that contains only letters is an isogram.Assume the empty string is an isogram.Ignore letter case.

Example: (Input-- > Output)

    "Dermatoglyphics" -- > true "aba" -- > false "moOse" -- > false (ignore letter case)

    isIsogram "Dermatoglyphics" = true
    isIsogram "moose" = false
    isIsogram "aba" = false
*/

char to_lower(char c)
{
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }

    return c;
}

bool is_isogram(std::string str)
{
    for (char& c : str) c = to_lower(c);
    std::set <char> str_set(str.begin(), str.end());
    return str.size() == str_set.size();
}
