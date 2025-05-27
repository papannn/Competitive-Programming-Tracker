#include <bits/stdc++.h>

using namespace std;

long long traverse(long long val, long long maxVal, vector<vector<long long>> &adjList, vector<vector<bool> >& visited, unordered_map<long long, long long> &valNode, long long from, long long to, bool isAdd) {
    cout << "JOKO" << endl;
    cout << from << endl;
    cout << to << endl;
    if (visited[from][to]) {
        return maxVal;
    }
    
    visited[from][to] = true;
    if (isAdd) {
        val += valNode[to];
    } else {
        val -= valNode[to];
    }
    maxVal = max(maxVal, val);

    long long res = 0;
    for (long long i = 0 ; i < adjList[to].size(); i++) {
        // if (adjList[to][i] != '-') {
            // visited[to][i] = true;
            // traverse(temp, parent, to, i, adjList, visited, resArr);
        res = max(res, traverse(val, maxVal, adjList, visited, valNode, to, adjList[to][i], !isAdd));
        visited[to][i] = false;
    }
    return maxVal;
}

int main () {
    long long t;
    cin >> t;
    long long v;
    cin >> v;
    unordered_map<long long, long long> valNode;
    for (long long i = 1 ; i <= v; i++) {
        long long val;
        cin >> val;
        valNode[i] = val;
    }

    vector<vector<long long>> adjList(v + 1);
    for (long long i = 0 ; i < v - 1; i++) {
        long long from, to;
        cin >> from >> to;
        adjList[from].push_back(to);
        adjList[to].push_back(from);
    }

    for (int i = 1; i <= adjList.size(); i++) {
        cout << i << endl;
        for (int j = 0; j < adjList[i].size(); j++) {
            cout << adjList[i][j] << " ";
        }
        cout << endl;
    }
    cout << "hello" << endl;

    vector<vector<bool> > visited(v + 1, vector<bool>(v + 1, false));
    for (long long i = 1 ; i < adjList.size(); i++) {
        long long maxVal = 0;
        for (long long to = 0; adjList[i].size(); to++) {
            long long res = traverse(valNode[i], valNode[i], adjList, visited, valNode, i, adjList[i][to], false);
            visited[i][adjList[i][to]] = false;
            maxVal = max(res, maxVal);
        }
        cout << maxVal << " ";
    }
    cout << "hello2" << endl;
    cout << endl;
}

/*
2
5
4 5 2 6 7
1 2
3 2
4 3
5 1
*/