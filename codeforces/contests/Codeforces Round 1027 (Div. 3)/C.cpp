#include <bits/stdc++.h>

using namespace std;
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

        int res = 1;
        int prev = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            if (prev + 1 < arr[i]) {
                res++;
                prev = arr[i];
            }
        }
        cout << res << endl;
    }
}