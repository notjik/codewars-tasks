#include <iostream>
#include <vector>
#include <string>
//#include "collatz-conjecture.h"
//#include "multiples-of-3-or-5.h"
//#include "who-likes-it.h"
//#include "isograms.h"
//#include "youre-a-square.h"
//#include "complementary-dna.h"
#include "replace-with-alphabet-position.h"

using namespace std;

//int main() // Collatz Conjecture (3n+1)
//{
//    unsigned int n;
//    cin >> n;
//    unsigned int res = CollatzConjecture().hotpo(n);
//    cout << res << endl;
//    return 0;
//}

//int main() // Multiples of 3 or 5
//{
//    int number;
//    cin >> number;
//    int res = MultiplesOf3Or5().solution(number);
//    cout << res << endl;
//    return 0;
//}

//int main() // Who likes it?
//{
//    vector <string> in;
//    string input;
//    while (cin >> input)
//        in.push_back(input);
//    string res = WhoLikesIt().likes(in);
//    cout << res << endl;
//    return 0;
//}

//int main() // Isograms
//{
//    string str;
//    cin >> str;
//    cout << Isograms().is_isogram(str) << endl;
//    return 0;
//}

//int main() // You're a square!
//{
//    int n;
//    cin >> n;
//    cout << YouReASquare().is_square(n) << endl;
//    return 0;
//}

//int main() // Complementary DNA
//{
//    string dna;
//    cin >> dna;
//    cout << ComplementaryDNA().DNAStrand(dna) << endl;
//    return 0;
//}

int main() // Replace With Alphabet Position
{
    string input;
    getline(cin, input);
    cout << ReplaceWithAlphabetPosition().alphabet_position(input);
    return 0;
}