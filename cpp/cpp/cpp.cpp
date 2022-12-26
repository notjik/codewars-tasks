#include <iostream>
#include <vector>
#include <string>
//#include "collatz-conjecture.h"
//#include "multiples-of-3-or-5.h"
//#include "who-likes-it.h"
#include "isograms.h"

using namespace std;

//int main() // Collatz Conjecture (3n+1)
//{
//    unsigned int n;
//    cin >> n;
//    unsigned int res = hotpo(n);
//    cout << res << endl;
//    return 0;
//}

//int main() // Multiples of 3 or 5
//{
//    int number;
//    cin >> number;
//    int res = solution(number);
//    cout << res << endl;
//    return 0;
//}

//int main() // Who likes it?
//{
//    vector <string> in;
//    string input;
//    while (cin >> input)
//        in.push_back(input);
//    string res = likes(in);
//    cout << res << endl;
//    return 0;
//}

int main() // Isograms
{
    string str;
    cin >> str;
    cout << is_isogram(str) << endl;
    return 0;
}