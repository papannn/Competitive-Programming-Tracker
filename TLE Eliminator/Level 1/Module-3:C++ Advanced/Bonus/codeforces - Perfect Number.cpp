#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/919/B
int main () {
    int k;
    cin >> k;

    long long res = 0;
    int counter = 0;
    for (int i = 0 ; counter < k; i++) {

        int val = i;
        int sum = 0;
        while (val != 0) {
            sum += val % 10;
            val /= 10;
        }

        if (sum == 10) {
            counter++;
            res = i;
        }
    }

    cout << res << endl;
}