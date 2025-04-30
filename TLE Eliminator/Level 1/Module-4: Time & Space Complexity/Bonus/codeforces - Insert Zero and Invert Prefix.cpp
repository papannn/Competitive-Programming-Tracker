#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1839/C
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

        if (arr[arr.size() - 1] == 1) {
            cout << "NO" << endl;
            continue;
        }
        
        cout << "YES" << endl;
        for (int i = arr.size() - 1; i >= 0 ;) {
            if (i == 0) {
                if (arr[i] == 0) {
                    cout << 0 << " ";
                }
                break;
            }

            if (arr[i - 1] == 0) {
                cout << 0 << " ";
                i--;
                continue;
            }

            int count = 0;
            while (arr[i - 1] == 1) {
                i--;
                count++;
                cout << 0 << " ";
            }
            
            cout << count << " ";
            i--;
        }
        cout << endl;
    }
}