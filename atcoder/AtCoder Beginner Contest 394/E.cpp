#include <iostream>
#include <vector>

using namespace std;
int n;
void traverse(string& str, int parent, int from, int to, vector<vector<char> >& adjList, vector<vector<bool> >& visited, vector<vector<int> >& resArr) {
    
    
    if (visited[from][to]) {
        if (parent == 1) {
            cout << from << " " << to << endl;
        }
        return;
    }

    visited[from][to] = true;
    int left = 0;
    int right = str.length() - 1;
    bool valid = true;
    // cout << str << endl;
    while (left < right) {
        if (str[left] != str[right]) {
            valid = false;
            // cout << str << endl;
            break;
        }
        left++;
        right--;
    }

    if (valid && str.length() != 0) {
        int len = str.length();
        resArr[parent][to] = min(resArr[parent][to], len);
    }

    
    for (int i = 0 ; i < adjList[to].size(); i++) {
        if (adjList[to][i] != '-') {
            // visited[to][i] = true;
            string temp = str + adjList[to][i];
            traverse(temp, parent, to, i, adjList, visited, resArr);
            visited[to][i] = false;
        }
    }
    
}

int main () {
    
    cin >> n;
    vector<vector<char> > adjList(n);
    vector<vector<int> > resArr(n);
    for (int i = 0 ; i < n; i++) {
        for (int j = 0; j < n; j++) {
            char c;
            cin >> c;
            adjList[i].push_back(c);
            if (i == j) {
                resArr[i].push_back(0);
            } else {
                resArr[i].push_back(1e7);
            }
        }
    }

    // for (int i = 0 ; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         cout << adjList[i][j];
    //     }
    //     cout << endl;
    // }

    // bool visited[n][n];
    // for (int i = 0 ; i < n; i++) {
    //     memset(visited[i], false, sizeof(visited));
    // }
    vector<vector<bool> > visited(n, vector<bool>(n, false));
    for (int from = 0 ; from < n; from++) {
        
        for (int to = 0; to < n; to++) {
            if (from == to) {
                continue;
            }

            if (adjList[from][to] == '-') {
                continue;
            }
            string temp = "";
            temp += adjList[from][to];
            
            traverse(temp, from, from, to, adjList, visited, resArr);
            visited[from][to] = false;
        }
        
    }

    for (int i = 0 ; i < n; i++) {
        for (int j = 0 ; j < n; j++) {
            if (resArr[i][j] == 1e7) {
                cout << -1 << " ";
            } else 
            cout << resArr[i][j] << " ";
        }
        cout << endl;
    }
}