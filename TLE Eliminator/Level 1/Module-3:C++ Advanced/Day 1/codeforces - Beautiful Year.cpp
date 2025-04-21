#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/271/A
bool isBeautiful(int year) {
    unordered_set<int> s;
    while (year != 0) {
        int div = year % 10;
        if (s.find(div) != s.end()) {
            return false;
        }
        s.insert(div);
        year /= 10;
    }

    return true;
}

int main () {
    int n;
    cin >> n;
    n++;
    while (!isBeautiful(n)) {
        n++;
    }
    cout << n << endl;
}