#include <bits/stdc++.h>

using namespace std;
int main () {
    int n;
    cin >> n;

    int prev;
    cin >> prev;
    n--;
    bool valid = true;
    while (n--) {
        int num;
        cin >> num;
        if (num <= prev) {
            valid = false;
            break;
        }
        prev = num;
    }
    cout << (valid ? "Yes" : "No") << endl;
}