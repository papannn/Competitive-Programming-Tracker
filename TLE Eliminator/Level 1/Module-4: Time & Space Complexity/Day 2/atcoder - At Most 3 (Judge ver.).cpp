#include <bits/stdc++.h>

using namespace std;
// https://atcoder.jp/contests/abc251/tasks/abc251_b
int main () {
    int n, w;
    cin >> n >> w;

    vector<int> arr;
    while (n--) {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    int res = 0;
    unordered_set<int> tag;
    for (int i = 0 ; i < arr.size(); i++) {
        if (arr[i] <= w) {
            if (tag.find(arr[i]) == tag.end()) {
                res++;
                tag.insert(arr[i]);
            }
            for (int j = i + 1; j < arr.size(); j++) {
                if (arr[i] + arr[j] <= w) {
                    if (tag.find(arr[i] + arr[j]) == tag.end()) {
                        res++;
                        tag.insert(arr[i] + arr[j]);
                    }

                    for (int k = j + 1; k < arr.size(); k++) {
                        if (arr[i] + arr[j] + arr[k] <= w) {
                            if (tag.find(arr[i] + arr[j] + arr[k]) == tag.end()) {
                                res++;
                                tag.insert(arr[i] + arr[j] + arr[k]);
                            }
                        }
                    }

                }
            }
        }
    }
    cout << res << endl;
}