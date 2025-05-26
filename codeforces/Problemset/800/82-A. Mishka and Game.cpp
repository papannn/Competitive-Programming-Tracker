#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/703/A
// O(t)
int main () {
    int t;
    cin >> t;
    int score = 0;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a > b) {
            score--;
        }

        if (a < b) {
            score++;
        }
    }

    if (score == 0) {
        cout << "Friendship is magic!^^" << endl;
    }

    if (score < 0) {
        cout << "Mishka" << endl;
    }
    
    if (score > 0) {
        cout << "Chris" << endl;
    }
}