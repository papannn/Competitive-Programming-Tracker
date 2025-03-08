#include <bits/stdc++.h>

using namespace std;

unordered_map<int, vector<int>> path;
unordered_map<string, long long> labelMap;
long long minVal = (long long) 1 << 60;
int fin;
void traverse(int from, int to, long long currVal, unordered_set<int>& visited) {
    if (visited.find(to) != visited.end()) {
        return;
    }

    visited.insert(to);

    if (to == fin) {
        minVal = min(minVal, currVal);
        return;
    }
    
    for (int i = 0; i < path[to].size(); i++) {
        if (visited.find(path[to][i]) != visited.end()) {
            continue;
        }
        string temp = "";
        temp += to_string(to);
        temp += "_";
        temp += to_string(path[to][i]);
        long long xorVal = labelMap[temp];
        currVal ^= xorVal;
        traverse(to, path[to][i], currVal, visited);
        visited.erase(path[to][i]);
        currVal ^= xorVal;
    }
    visited.erase(to);
    
}

int main () {
    int n, m;
    cin >> n >> m;
    fin = n;
    while (m--) {
        int from, to;
        long long label;
        cin >> from >> to >> label;
        path[from].push_back(to);
        path[to].push_back(from);
        string temp = "";
        temp += to_string(from);
        temp += "_";
        temp += to_string(to);

        string temp1 = "";
        temp1 += to_string(to);
        temp1 += "_";
        temp1 += to_string(from);

        labelMap[temp] = label;
        labelMap[temp1] = label;
    }

    unordered_set<int> visited;
    visited.insert(1);
    for (int num : path[1]) {
        string temp = "";
        temp += to_string(1);
        temp += "_";
        temp += to_string(num);
        traverse(1, num, labelMap[temp], visited);
    }

    cout << minVal << endl;
}