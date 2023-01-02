/* 
Deoxyribonucleic acid (DNA) is a chemical found in the nucleus of cells and carries the "instructions" for the development and functioning of living organisms.

If you want to know more: http://en.wikipedia.org/wiki/DNA

In DNA strings, symbols "A" and "T" are complements of each other, as "C" and "G". Your function receives one side of the DNA (string, except for Haskell); you need to return the other complementary side. DNA strand is never empty or there is no DNA at all (again, except for Haskell).

More similar exercise are found here: http://rosalind.info/problems/list-view/ (source)

Example: (input --> output)

"ATTGC" --> "TAACG"
"GTAT" --> "CATA"
*/

/* P.s: not finished */
#include <stdlib.h>
#include <string.h>

static char* dna_strand(const char* dna)
{
    char res[64];
    for (int i = 0; i < 64; i++) res[i] = '\0';
    int len = strlen(dna);
    for (int i = 0; i < len; i++) {
        if (dna[i] == 'A') res[i] = 'T';
        else if (dna[i] == 'T') res[i] = 'A';
        else if (dna[i] == 'C') res[i] = 'G';
        else if (dna[i] == 'G') res[i] = 'C';
        else res[i] = dna[i];
    }
    return res;
}