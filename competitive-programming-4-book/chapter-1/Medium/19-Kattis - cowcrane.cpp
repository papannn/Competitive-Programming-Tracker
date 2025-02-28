#include <bits/stdc++.h>
#define ll long long

using namespace std;

int diff(long long a, long long b) {
    return abs(a - b);
}

int main () {
    ll cow1, cow2;
    ll target1, target2;
    ll time1, time2;

    cin >> cow1 >> cow2;
    cin >> target1 >> target2;
    cin >> time1 >> time2;
    bool possible = false;
    if (diff(0, cow1) + diff(cow1, target1) <= time1 && diff(0, cow1) + diff(cow1, target1) + diff(target1, cow2) + diff(cow2, target2) <= time2) {
        possible = true;
    } else if (diff(0, cow2) + diff(cow2, target2) <= time2 && diff(0, cow2) + diff(cow2, target2) + diff(target2, cow1) + diff(cow1, target1) <= time1) {
        possible = true;
    } else if (diff(0, cow2) + diff(cow2, cow1) + diff(cow1, target1) <= time1 && diff(0, cow2) + diff(cow2, cow1) + diff(cow1, target1) + diff(target1, cow1) + diff(cow1, target2) <= time2) {
        possible = true;
    } else if (diff(0, cow1) + diff(cow1, cow2) + diff(cow2, target2) <= time2 && diff(0, cow1) + diff(cow1, cow2) + diff(cow2, target2) + diff(target2, cow2) + diff(cow2, target1) <= time1) {
        possible = true;
    }

    cout << (possible ? "possible" : "impossible") << endl;
}