#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> arr;
        
        for (int i = 0 ; i < n; i++) {
            arr.push_back((i + 1) % k);
        }
        
        vector<int> res(n);
        bool flag = true;
        for (int i = n; i > 0; i--) {
            bool found = false;
            int modVal = i % k;
            vector<int> temp (arr);
            for (int j = 0 ; j < arr.size(); j++) {
                if (i != j + 1 && arr[j] == modVal) {
                    res[j] = i;
                    arr[j] = -1;
                    found = true;
                    break;
                }
            }
            
            if (!found) {
                flag = false;
                break;
            }
        }
        
        if (!flag) {
            cout << -1 << endl;
        } else {
            for (int i = 0 ; i < res.size(); i++) {
                cout << res[i] << " ";
            }
            cout << endl;
        }
    }
}
