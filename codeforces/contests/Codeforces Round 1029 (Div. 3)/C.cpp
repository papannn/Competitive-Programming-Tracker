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

        int ptr = 1;
        int res = 1;
        unordered_set<int> prevNum = {arr[0]};
        while (ptr < arr.size()) {
            unordered_set<int> currNum;
            while (ptr < arr.size() && prevNum.size() != 0) {
                if (prevNum.find(arr[ptr]) != prevNum.end()) {
                    prevNum.erase(arr[ptr]);
                }
                currNum.insert(arr[ptr]);
                ptr++;
            }

            if (prevNum.size() == 0) {
                res++;
                prevNum = currNum;
            } else {
                break;
            }
        }
        cout << res << endl;
    }
}
// 52 101
// 22 41
// 12 21
// 2 1