#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1512/A
// O(n)
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

        int majority;
        if (arr[0] == arr[1]) {
            majority = arr[0];
        } else if (arr[1] == arr[2]) {
            majority = arr[1];
        } else {
            majority = arr[2];
        }

        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] != majority) {
                cout << i + 1 << endl;
            }
        }
    }
}