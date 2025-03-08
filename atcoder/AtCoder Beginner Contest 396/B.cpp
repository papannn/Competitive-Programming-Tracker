#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    vector<int> arr(100);
    while (t--) {
        int q;
        cin >> q;
        if (q == 1) {
            int num;
            cin >> num;
            arr.push_back(num);
        } else {
            cout << arr[arr.size() - 1] << endl;
            arr.pop_back();
        }
    }
}