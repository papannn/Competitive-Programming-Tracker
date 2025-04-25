#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1614/B
struct Building {
    int idx;
    int freq;
};

bool compareByFreq(const Building &a, const Building &b) {
    return a.freq < b.freq;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> freqArr;
        while (n--) {
            int num;
            cin >> num;
            freqArr.push_back(num);
        }

        vector<Building> buildingArr;
        for (int i = 0 ; i < freqArr.size(); i++) {
            Building b;
            b.freq = freqArr[i];
            b.idx = i;
            buildingArr.push_back(b);
        }
        sort(buildingArr.begin(), buildingArr.end(), compareByFreq);

        long long front = 1;
        long long back = -1;
        bool isFront = true;
        vector<int> res (buildingArr.size());
        long long dist = 0;
        while (!buildingArr.empty()) {
            long long val = isFront ? front++ : back--;
            isFront = !isFront;
            res[buildingArr[buildingArr.size() - 1].idx] = val;
            dist += abs(val) * buildingArr[buildingArr.size() - 1].freq * 2;
            buildingArr.pop_back();
        }
        cout << dist << endl;
        cout << 0 << " ";
        for (int i = 0 ; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }
}