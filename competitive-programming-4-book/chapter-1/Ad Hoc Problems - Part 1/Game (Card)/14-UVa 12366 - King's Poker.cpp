#include <bits/stdc++.h>

using namespace std;
int getPair(vector<int>& arr) {
    unordered_set<int> set;
    for (int i = 0 ; i < arr.size(); i++) {
        if (set.find(arr[i]) != set.end()) {
            return arr[i];
        }
        set.insert(arr[i]);
    }
    return -1;
}

int getKick(vector<int>& arr) {
    unordered_set<int> set;
    for (int i = 0 ; i < arr.size(); i++) {
        if (set.find(arr[i]) != set.end()) {
            set.erase(arr[i]);
        } else {
            set.insert(arr[i]);
        }
    }
    return *set.begin();
}

int main () {
    vector<int> arr(3);
    while (cin >> arr[0] >> arr[1] >> arr[2]) {
        if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0) {
            break;
        }

        unordered_set<int> unique;
        for (int i = 0 ; i < arr.size(); i++) {
            unique.insert(arr[i]);
        }

        vector<int> res;
        if (unique.size() == 3) { // High
            res.push_back(1);
            res.push_back(1);
            res.push_back(2);
        } else if (unique.size() == 2) { // Pair
            int pair = getPair(arr);
            int kick = getKick(arr);
            if (kick + 1 == pair && kick + 2 <= 13) {
                res.push_back(pair);
                res.push_back(pair);
                res.push_back(kick + 2);
            } else if (kick + 1 == pair && kick + 2 > 13) {
                if (pair + 1 <= 13) {
                    res.push_back(pair + 1);
                    res.push_back(pair + 1);
                    res.push_back(1);
                } else {
                    res.push_back(1);
                    res.push_back(1);
                    res.push_back(1);
                }
            } else if (kick + 1 != pair && kick + 1 <= 13) {
                res.push_back(pair);
                res.push_back(pair);
                res.push_back(kick + 1);
            } else if (kick + 1 != pair && kick + 1 > 13){
                if (pair + 1 <= 13) {
                    res.push_back(pair + 1);
                    res.push_back(pair + 1);
                    res.push_back(1);
                } else {
                    res.push_back(1);
                    res.push_back(1);
                    res.push_back(1);
                }
            }
            
        } else if (unique.size() == 1){ // Sets
            int num = arr[0];
            if (num == 13) {
                cout << "*" << endl;
                continue;
            }

            res.push_back(num + 1);
            res.push_back(num + 1);
            res.push_back(num + 1);
        }
        sort(res.begin(), res.end());
        for (int i = 0 ; i < res.size(); i++) {
            cout << res[i];
            if (i < 2) {
                cout << " ";
            }
        }
        cout << endl;
    }
}