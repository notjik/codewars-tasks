#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//#include "CollatzConjecture.c"
//#include "MultiplesOf3Or5.c"
//#include "WhoLikesIt.c"
//#include "Isograms.c"
//#include "YouReASquare.c"
//#include "ComplementaryDNA.c"
#include "ReplaceWithAlphabetPosition.c"

/*
int main() // Collatz Conjecture (3n+1)
{
    unsigned int n;
    scanf("%d", &n);
    printf("%d", hotpo(n));
    return 0;
}
*/

/*
int main() // Multiples of 3 or 5
{
    int number;
    scanf("%d", &number);
    printf("%d", solution(number));
    return 0;
}
*/

/*
int main() // Who likes it?
{
    {
        const char names[1] = { "" };
        char* submitted = likes(0, names);
        printf(submitted);
    }
    printf("\n");
    {
        const char* const names[1] = { "Peter" };
        char* submitted = likes(1, names);
        printf(submitted);
    }
    printf("\n");
    {
        const char* const names[2] = { "Jacob", "Alex" };
        char* submitted = likes(2, names);
        printf(submitted);
    }
    printf("\n");
    {
        const char* const names[3] = { "Max", "John", "Mark" };
        char* submitted = likes(3, names);
        printf(submitted);
    }
    printf("\n");
    {
        const char* const names[4] = { "Alex", "Jacob", "Mark", "Max" };
        char* submitted = likes(4, names);
        printf(submitted);
    }
    return 0;
}
*/

/*
int main() // Isograms
{
    char string[64];
    scanf("%s", string);
    if (IsIsogram(string) == 1) printf("true");
    else printf("false");
    return 0;
}
*/

/*
int main() // You're a square!
{
    int n;
    scanf("%d", &n);
    if (is_square(n) == 1) printf("true");
    else printf("false");
    return 0;
}
*/

/*
// P.s: not finished
int main() // Complementary DNA
{
    char dna[64];
    scanf("%s", dna);
    printf("%s", dna_strand(dna));
    return 0;
}
*/

/*
// P.s: not finished
int main() // Replace With Alphabet Position
{
    printf("%s", alphabet_position("The sunset sets at twelve o' clock."));
    return 0;
}
*/