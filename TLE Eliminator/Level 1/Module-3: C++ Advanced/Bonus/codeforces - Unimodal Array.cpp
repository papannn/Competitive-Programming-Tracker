#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/831/A
int main () {
    int n;
    cin >> n;
    vector<int> arr;
    while (n--) {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    int state = 0;
    const int STARTING = 0;
    const int INCREASING = 1;
    const int CONSTANT = 2;
    const int DECREASING = 3;
    bool valid = true;
    for (int i = 0 ; i < arr.size() - 1; i++) {
        if (arr[i] == arr[i + 1]) { // Constant
            if (state == DECREASING) {
                valid = false;
                break;
            } else {
                state = CONSTANT;
            }
        }

        if (arr[i] < arr[i + 1]) { // Increasing
            if (state == DECREASING || state == CONSTANT) {
                valid = false;
                break;
            } else {
                state = INCREASING;
            }
        }

        if (arr[i] > arr[i + 1]) { // Decreasing
            state = DECREASING;
        }
    }

    cout << (valid ? "YES" : "NO") << endl;
}