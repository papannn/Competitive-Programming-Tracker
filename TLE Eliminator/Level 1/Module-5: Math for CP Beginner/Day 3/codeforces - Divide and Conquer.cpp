#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1762/A
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr;
        while (n--) {
            long long num;
            cin >> num;
            arr.push_back(num);
        }

        long long sum = 0;
        for (long long n : arr) {
            sum += n;
        }

        if (sum % 2 == 0) {
            cout << 0 << endl;
            continue;
        }

        int minVal = 1e6;
        for (int i = 0 ; i < arr.size(); i++) {
            int isOdd = arr[i] % 2;
            int cnt = 0;
            while (arr[i] % 2 == isOdd) {
                arr[i] /= 2;
                cnt++;
            }

            minVal = min(minVal, cnt);
        }

        cout << minVal << endl;
    }
}