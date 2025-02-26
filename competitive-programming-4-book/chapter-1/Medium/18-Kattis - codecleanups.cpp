#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    unordered_set<int> dayArr;
    while (t--) {
        int n;
        cin >> n;
        dayArr.insert(n);
    }

    int amountBurden = 0;
    int count = 0;
    int res = 0;
    for (int i = 1; i <= 365; i++) {
        count += amountBurden;
        if (dayArr.find(i) != dayArr.end()) {
            amountBurden++;
        }

        if (count + amountBurden >= 20) {
            // Cleanup
            res++;
            count = 0;
            amountBurden = 0;
        }
    }

    res += amountBurden > 0;
    cout << res << endl;
}