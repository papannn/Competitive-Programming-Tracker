#include <bits/stdc++.h>

using namespace std;
// https://www.hackerrank.com/challenges/number-groups/problem
string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'sumOfGroup' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts INTEGER k as parameter.
 */

long sumOfGroup(int k) {
    // Return the sum of the elements of the k'th group.
    long n = k - 1;
    long counter = 1 + n * (n + 1);
    
    long res = 0;
    while (k--) {
        res += counter;
        counter += 2;
    }
    return res;
}
