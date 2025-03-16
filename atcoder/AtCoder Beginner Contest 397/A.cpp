#include <bits/stdc++.h>

using namespace std;
int main () {
    double temp;
    cin >> temp;

    if (temp >= 38) {
        cout << 1 << endl;
    } else if (temp >= 37.5) {
        cout << 2 << endl;
    } else {
        cout << 3 << endl;
    }
}