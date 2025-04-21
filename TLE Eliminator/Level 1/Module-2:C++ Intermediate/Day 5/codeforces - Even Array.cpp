#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1367/B
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr;
        while (n--) {
            int num;
            cin >> num;
            arr.push_back(num);
        }

        int defectEven = 0;
        int defectOdd = 0;
        for (int i = 0; i < arr.size(); i++) {
            int isOddVal = arr[i] % 2;
            int isOddIdx = i % 2;

            if (isOddVal != isOddIdx) {
                if (i % 2 == 0) { // Even
                    defectEven++;
                } else {
                    defectOdd++;
                }
            }
        }

        if (defectOdd != defectEven) {
            cout << -1 << endl;
        } else {
            cout << defectEven << endl;
        }
    }
}