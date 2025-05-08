#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/660/A
int main () {
    int n;
    cin >> n;
    vector<long long> arr;
    while (n--) {
        long long num;
        cin >> num;
        arr.push_back(num);
    }

    int res = 0;
    vector<long long> resArr;
    for (int i = 0 ; i < arr.size() - 1; i++) {
        if (gcd(arr[i], arr[i + 1]) == 1) {
            resArr.push_back(arr[i]);
            continue;
        }

        resArr.push_back(arr[i]);
        resArr.push_back(1);
        res++;
    }

    resArr.push_back(arr[arr.size() - 1]);
    cout << res << endl;
    for (long long n : resArr) {
        cout << n << " ";
    }
    cout << endl;
}