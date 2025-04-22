#include <bits/stdc++.h>

using namespace std;
// https://atcoder.jp/contests/abc301/tasks/abc301_b
int main () {
    int n;
    cin >> n;
    
    vector<int> arr;
    while (n--) {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    for (int i = 0 ; i < arr.size() - 1; i++) {
        int curr = arr[i];
        int next = arr[i + 1];
        cout << arr[i] << " ";
        while (abs(curr - next) > 1) {
            if (next > curr) {
                curr++;
            } else {
                curr--;
            }
            cout << curr << " ";
        }
    }
    cout << arr[arr.size() - 1];
}