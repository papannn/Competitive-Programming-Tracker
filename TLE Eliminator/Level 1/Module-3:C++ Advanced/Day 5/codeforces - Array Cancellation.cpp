#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1405/B
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

        int ptr = 0;
        int negPtr = 0;
        while (ptr < arr.size() && negPtr < arr.size()) {
            if (arr[ptr] > 0) {
                int anotherPtr = ptr + 1;
                if (negPtr <= ptr) {
                    negPtr = ptr + 1;
                }

                while (negPtr < arr.size()) {
                    if (arr[negPtr] < 0) {
                        long long diff = min(abs(arr[ptr]), abs(arr[negPtr]));
                        arr[ptr] -= diff;
                        arr[negPtr] += diff;

                        if (arr[ptr] == 0) {
                            break;
                        }
                    }
                    negPtr++;
                }
            }
            ptr++;
        }

        long long res = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] > 0) {
                res += arr[i];
            }
        }

        cout << res << endl;
    }
}