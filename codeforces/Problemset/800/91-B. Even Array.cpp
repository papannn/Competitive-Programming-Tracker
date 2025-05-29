#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1367/B
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

        int badEven = 0;
        for (int i = 0 ; i < arr.size(); i += 2) {
            if (arr[i] % 2 == 1) {
                badEven++;
            }
        }

        int badOdd = 0;
        for (int i = 1; i < arr.size(); i += 2) {
            if (arr[i] % 2 == 0) {
                badOdd++;
            }
        }
        
        cout << (badOdd == badEven ? badOdd : -1) << endl;
    }
}