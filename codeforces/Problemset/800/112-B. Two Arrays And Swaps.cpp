#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1353/B
// O(t * n log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr1;
        vector<int> arr2;
        for (int i = 0 ; i < n; i++) {
            int num;
            cin >> num;
            arr1.push_back(num);
        }

        for (int i = 0 ; i < n; i++) {
            int num;
            cin >> num;
            arr2.push_back(num);
        }

        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());

        int ptr1 = 0;
        int ptr2 = arr2.size() - 1;
        while (k > 0 && arr2[ptr2] > arr1[ptr1] && ptr1 < arr1.size() ) {
            swap(arr1[ptr1], arr2[ptr2]);
            ptr1++;
            ptr2--;
            k--;
        }
        
        int res = 0;
        for (int i = 0 ; i < arr1.size(); i++) {
            res += arr1[i];
        }
        cout << res << endl;
    }
}