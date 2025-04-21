#include <bits/stdc++.h>

using namespace std;
// https://www.hackerearth.com/problem/golf/print-the-pattern/
int main () {
    int n;
    cin >> n;
    int counter = 2;
    bool decreasing = false;
    cout << 1 << endl;
    for (int i = 2 ; i <= n; i++) {
        int maxCounter = counter;
        for (int j = 0; j < i; j++) {
            if (decreasing) {
                cout << --counter << " ";
            } else {
                cout << counter++ << " ";
            }
        }
        
        
        if (!decreasing) {
            counter += i + 1;
        } else {
            counter = maxCounter;
        }
        decreasing = !decreasing;
        cout << endl;
    }
}