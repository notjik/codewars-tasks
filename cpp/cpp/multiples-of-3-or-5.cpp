#include <iostream>
#include <vector>
#include <numeric>
#include "multiples-of-3-or-5.h"

using namespace std;

/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Finish the solution so that it returns the sum of all the multiples of 3 or 5 below the number passed in.Additionally, if the number is negative, return 0 (for languages that do have them).

Note: If the number is a multiple of both 3 and 5, only count it once.

Courtesy of projecteuler.net(Problem 1)
*/

int MultiplesOf3Or5::solution(int number)
{
    vector <int> res;
    for (int i = 1; i < number; i++) {
        if (!(i % 3) || !(i % 5)) {
            res.push_back(i);
        }
    }
    return accumulate(res.begin(), res.end(), 0);
}
