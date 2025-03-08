#include <bits/stdc++.h>

using namespace std;
int main () {
    int len;
    cin >> len;
    vector<int> arr;
    while (len--) {
        int n;
        cin >> n;
        arr.push_back(n);
    }

    int prev = arr[0];
    int count = 1;
    bool valid = false;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] == prev) {
            count++;
            if (count == 3) {
                valid = true;
                break;
            }
        } else {
            prev = arr[i];
            count = 1;
        }
    }
    cout << (valid ? "Yes" : "No") << endl;
}