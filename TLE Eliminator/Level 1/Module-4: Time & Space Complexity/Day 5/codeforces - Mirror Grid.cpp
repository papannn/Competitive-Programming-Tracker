#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1703/problem/E
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<string> arr;
        string dummy = "";
        for (int i = 0 ; i < n; i++) {
            string s;
            cin >> s;
            arr.push_back(s);
            dummy += '0';
        }

        vector<string> arr1;
        vector<string> arr2;
        vector<string> arr3;
        for (int i = 0 ; i < n; i++) {
            arr1.push_back(string(dummy));
            arr2.push_back(string(dummy));
            arr3.push_back(string(dummy));
        }

        int res = 0;
        for (int i = 0 ; i < n; i++) {
            for (int j = 0 ; j < n; j++) {
                arr1[j][n - i - 1] = arr[i][j];
            }
        }

        for (int i = 0 ; i < n; i++) {
            for (int j = 0 ; j < n; j++) {
                arr2[j][n - i - 1] = arr1[i][j];
            }
        }

        for (int i = 0 ; i < n; i++) {
            for (int j = 0 ; j < n; j++) {
                arr3[j][n - i - 1] = arr2[i][j];
            }
        }

        for (int i = 0 ; i < n; i++) {
            for (int j = 0 ; j < n; j++) {
                int zeroCnt = 0;
                zeroCnt += arr[i][j] == '0';
                zeroCnt += arr1[i][j] == '0';
                zeroCnt += arr2[i][j] == '0';
                zeroCnt += arr3[i][j] == '0';
                res += min(zeroCnt, 4-zeroCnt);
            }
        }

        cout << res / 4 << endl;
    }
}