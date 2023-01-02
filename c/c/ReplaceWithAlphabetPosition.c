/*
Welcome.

In this kata you are required to, given a string, replace every letter with its position in the alphabet.

If anything in the text isn't a letter, ignore it and don't return it.

"a" = 1, "b" = 2, etc.

Example
alphabet_position("The sunset sets at twelve o' clock.")
Should return "20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11" ( as a string )
*/

/* P.s: not finished */
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

static char* alphabet_position(const char* text) {
	const int len_text = strlen(text);
	int len = 0;
	for (int i = 0; i < len_text; i++) if (isalpha(text[i])) len += 1;
	int *res = NULL;
	res = (int*)malloc(sizeof(int) * len);
 	for (int i = 0; i < len_text; i++) if (isalpha(text[i])) res += (int) text[i];
	return res;
}