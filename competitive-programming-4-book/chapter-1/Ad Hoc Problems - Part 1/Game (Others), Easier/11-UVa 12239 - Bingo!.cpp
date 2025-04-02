#include <bits/stdc++.h>

using namespace std;
int main () {
    int n, b;
    while (cin >> n >> b) {
        if (n == 0 && b == 0) {
            break;
        }

        vector<int> arr;
        while (b--) {
            int num;
            cin >> num;
            arr.push_back(num);
        }

        unordered_set<int> tag;
        for (int i = 0 ; i < arr.size(); i++) {
            for (int j = i; j < arr.size(); j++) {
                tag.insert(abs(arr[i] - arr[j]));
            }
        }

        bool valid = true;
        for (int i = 0 ; i <= n; i++) {
            if (tag.find(i) == tag.end()) {
                valid = false;
                break;
            }
        }

        cout << (valid ? "Y" : "N") << endl;
    }
}