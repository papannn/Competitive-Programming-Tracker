#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
int main () {
    int t;
    cin >> t;
    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;
    while (t--) {
        int n;
        cin >> n;
        even += n % 2 == 0;
        odd += abs(n) % 2 == 1;
        positive += n > 0;
        negative += n < 0;
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
}