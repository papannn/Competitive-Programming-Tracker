#include <bits/stdc++.h>

using namespace std;
// https://atcoder.jp/contests/abc258/tasks/abc258_a
int main () {
    int k;
    cin >> k;
    int hour = 21;
    int min = 0;
    min += k;
    if (min / 60 > 0) {
        hour++;
    }
    min %= 60;
    cout << hour << ":" << (min < 10 ? "0" + to_string(min) : to_string(min)) << endl;
}