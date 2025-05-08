#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/158/A
int main () {
    int n, k;
    cin >> n >> k;

    vector<int> arr;
    while (n--) {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    
    int res = 0;
    for (int i = 0 ; i < arr.size(); i++) {
        if (arr[i] == 0) {
            continue;
        }

        if (arr[i] >= arr[k - 1]) {
            res++;
        }
    }
    cout << res << endl;
}