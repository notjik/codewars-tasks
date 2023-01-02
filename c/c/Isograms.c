/*
An isogram is a word that has no repeating letters, consecutive or non-consecutive. Implement a function that determines whether a string that contains only letters is an isogram. Assume the empty string is an isogram. Ignore letter case.

Example: (Input --> Output)

"Dermatoglyphics" --> true "aba" --> false "moOse" --> false (ignore letter case)

isIsogram "Dermatoglyphics" = true
isIsogram "moose" = false
isIsogram "aba" = false
*/
#include <stdbool.h>
#include <string.h>

static bool IsIsogram(const char* string)
{
    int len = strlen(string);
    for (int i = 0; i < len; i++) {
        if (!isalpha(string[i])) continue;
        for (int j = i + 1; j < len; j++) if (tolower(string[i]) == tolower(string[j])) return false;
    }
    return true;
}
