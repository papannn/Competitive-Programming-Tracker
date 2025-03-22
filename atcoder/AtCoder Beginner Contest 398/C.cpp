#include <bits/stdc++.h>

using namespace std;
int main () {
    int n;
    cin >> n;

    unordered_map<long long, int> mapping;
    vector<long long> arr;
    for (int i = 0 ; i < n; i++) {
        long long num;
        cin >> num;
        mapping[num]++;
        arr.push_back(num);
    }

    long long maxVal = -1;
    for (auto i : mapping) {
        if (i.second == 1) {
            maxVal = max(maxVal, i.first);
        }
    }

    if (maxVal == -1) {
        cout << maxVal << endl;
    } else {
        for (int i = 0 ; i < arr.size(); i++) {
            if (maxVal == arr[i]) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
}