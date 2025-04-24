#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1269/A
int main () {
    long long n;
    cin >> n;

    long long a = n;
    long long b = 4;
    vector<long long> divList = {2, 3, 5, 7, 11, 13, 17};
    while (true) {
        while (a - b < n) {
            while (true) {
                a++;
                bool valid = false;
                for (long long div : divList) {
                    if (a % div == 0 && a != div) {
                        valid = true;
                        break;
                    }
                }
                
                if (valid) {
                    break;
                }
            }
        }

        while (a - b > n) {
            while (true) {
                b++;
                bool valid = false;
                for (long long div : divList) {
                    if (b % div == 0 && b != div) {
                        valid = true;
                        break;
                    }
                }
                
                if (valid) {
                    break;
                }
            }
        }

        if (a - b == n) {
            break;
        }
    }

    cout << a << " " << b << endl;
}
