#include <bits/stdc++.h>

using namespace std;
int main () {
    int n;
    cin >> n;

    vector<int> arr;
    unordered_map<int, vector<int>> map;
    while (n--) {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    for (int i = 0 ; i < arr.size(); i++) {
        map[arr[i]].push_back(i);
    }

    int minVal = 1e7;
    for (auto i : map) {
        if (i.second.size() > 1) {
            int prev = i.second[0];
            for (int j = 1; j < i.second.size(); j++) {
                minVal = min(minVal, abs(prev - i.second[j]));
                prev = i.second[j];
            }
        }
    }

    if (minVal == 1e7) {
        cout << -1 << endl;
    } else {
        cout << minVal + 1 << endl;
    }
}