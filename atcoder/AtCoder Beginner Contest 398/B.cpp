#include <bits/stdc++.h>

using namespace std;
int main () {
    unordered_map<int, int> mapping;

    for (int i = 0 ; i < 7; i++) {
        int num;
        cin >> num;
        mapping[num]++;
    }

    unordered_set<int> s;
    bool three = false;
    bool two = false;
    for (auto &i : mapping) {
        if (i.second >= 2) {
            two = true;
            s.insert(i.first);
        }

        if (i.second >= 3) {
            three = true;
            s.insert(i.first);
        }
    }

    if (three && two && s.size() >= 2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}