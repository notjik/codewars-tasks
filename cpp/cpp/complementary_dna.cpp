#include <iostream>
#include <string>
#include <algorithm>
#include "complementary_dna.h"

/*
Deoxyribonucleic acid (DNA) is a chemical found in the nucleus of cells and carries the "instructions" for the development and functioning of living organisms.

If you want to know more: http://en.wikipedia.org/wiki/DNA

In DNA strings, symbols "A" and "T" are complements of each other, as "C" and "G". Your function receives one side of the DNA (string, except for Haskell); you need to return the other complementary side. DNA strand is never empty or there is no DNA at all (again, except for Haskell).

More similar exercise are found here: http://rosalind.info/problems/list-view/ (source)

Example: (input --> output)

"ATTGC" --> "TAACG"
"GTAT" --> "CATA"
*/

std::string DNAStrand(const std::string& dna)
{
    std::string dna_nconst = dna;
    std::replace(dna_nconst.begin(), dna_nconst.end(), 'A', 'X');
    std::replace(dna_nconst.begin(), dna_nconst.end(), 'T', 'A');
    std::replace(dna_nconst.begin(), dna_nconst.end(), 'X', 'T');
    std::replace(dna_nconst.begin(), dna_nconst.end(), 'C', 'X');
    std::replace(dna_nconst.begin(), dna_nconst.end(), 'G', 'C');
    std::replace(dna_nconst.begin(), dna_nconst.end(), 'X', 'G');
    return dna_nconst;
}
