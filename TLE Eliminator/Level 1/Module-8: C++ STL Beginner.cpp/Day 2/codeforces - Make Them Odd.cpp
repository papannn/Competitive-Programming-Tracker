#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1277/B
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_map<long long, int> mapping;
        while (n--) {
            long long num;
            cin >> num;
            if (num % 2 == 0)
                mapping[num]++;
        }

        int res = 0;
        while (true) {
            vector<long long> deletion;
            for (auto i : mapping) {
                long long val = i.first;
                while (true) {
                    val /= 2;
                    res++;
                    if (mapping.find(val) != mapping.end() && val != i.first) {
                        mapping[val] += i.second;
                        deletion.push_back(i.first);
                        break;
                    }

                    if (val % 2 == 1) {
                        deletion.push_back(i.first);
                        break;
                    }

                    if (val == 0) {
                        deletion.push_back(i.first);
                        break;
                    }
                }
            }
            
            for (long long del : deletion) {
                mapping.erase(del);
            }
            
            if (mapping.size() == 0) {
                break;
            }
        }
        cout << res << endl;
    }
}