#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/271/A
int main () {
    int year;
    cin >> year;
    while (true) {
        unordered_set<int> unique_num;
        year++;
        int currYear = year;
        while (currYear != 0) {
            unique_num.insert(currYear % 10);
            currYear /= 10;
        }

        if (unique_num.size() == 4) {
            break;
        }
    }
    cout << year << endl;
}