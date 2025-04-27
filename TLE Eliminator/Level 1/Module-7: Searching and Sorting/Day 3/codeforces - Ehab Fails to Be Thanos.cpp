#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1174/problem/A
int main () {
    int t;
    cin >> t;
    t *= 2;
    vector<int> arr;
    while (t--) {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    int number = arr[0];
    bool isSame = true;
    for (int i = 1; i < arr.size(); i++) {
        if (number != arr[i]) {
            isSame = false;
            break;
        }
    }

    if (isSame) {
        cout << -1 << endl;
        return 0;
    }

    sort(arr.begin(), arr.end(), greater<int>());
    for (int n : arr) {
        cout << n << " ";
    }
    cout << endl;
}