#include <iostream>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (s.length() < 3) {
            cout << 0 << endl;
            continue;
        }
        int countUp = 0;
        int countDown = 0;
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] == '-') {
                countUp++;
            } else {
                countDown++;
            }
        }

        if (countUp < 2 || countDown < 1) {
            cout << 0 << endl;
            continue;
        }

        long long remainder = countUp % 2;
        long long left = countUp / 2;
        long long right = countUp / 2 + remainder;
        cout << left * right * countDown << endl;
    }
}