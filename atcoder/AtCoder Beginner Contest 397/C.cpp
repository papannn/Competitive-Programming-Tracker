#include <bits/stdc++.h>

using namespace std;
int main () {
    int n;
    cin >> n;
    vector<int> arr;
    unordered_map<int, int> map2;
    while (n--) {
        int num;
        cin >> num;
        arr.push_back(num);
        map2[num]++;
    }

    int res = map2.size();
    unordered_map<int, int> map1;
    for (int i = 0 ; i < arr.size() - 1; i++) {
        map1[arr[i]]++;
        map2[arr[i]]--;
        if (map2[arr[i]] == 0) {
            map2.erase(arr[i]);
        }
        int val = map1.size() + map2.size();
        res = max(res, val);
    }
    cout << res << endl;
}