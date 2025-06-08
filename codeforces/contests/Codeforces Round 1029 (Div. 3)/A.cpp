#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr;
        while (n--) {
            int num;
            cin >> num;
            arr.push_back(num);
        }

        bool open = false;
        bool valid = true;
        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] == 1) {
                open = true;
            }

            if (open) {
                x--;
            }

            if (x < 0 && arr[i] == 1) {
                valid = false;
                break;
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }   
}