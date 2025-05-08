#include <bits/stdc++.h>

using namespace std;

bool backtrack(int y, int x, vector<vector<char>>& arr) {
    bool validY = true;
    for (int i = y - 1; i >= 0; i--) {
        // if (y == 1 && x == 2) {
        //     cout << "BOY" << endl;
        //     cout << i << " " << x << endl;
        //     cout << arr[i][x] << endl;
        // }
        if (arr[i][x] == '0') {
            validY = false;
            break;
        }
    }

    // if (y == 1 && x == 2) {
    //     cout << "HELL" << endl;
    //     cout << validY << endl;
    // }

    if (validY) {
        return true;
    }

    bool validX = true;
    for (int i = x - 1; i >= 0; i--) {
        if (arr[y][i] == '0') {
            validX = false;
            break;
        }
    }
    
    // if (y == 1 && x == 2) {
    //     cout << "PAR" << endl;
    //     cout << validX << endl;
    // }

    return validX;
}

int main () {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> arr;
        for (int i = 0 ; i < n; i++) {
            vector<char> temp;
            for (int j = 0 ; j < m; j++) {
                char c;
                cin >> c;
                temp.push_back(c);
            }
            arr.push_back(temp);
        }

        bool valid = true;
        for (int i = 0 ; i < n; i++) {
            if (!valid) {
                break;
            }
            for (int j = 0 ; j < m; j++) {
                if (arr[i][j] == '0') {
                    continue;
                }
                // cout << i << " " << j << endl;
                // cout << arr[i][j];
                // if (arr[i - 1][j] == '1' || arr[i][j - 1] == '1') {
                //     // valid = false;
                // } else {
                //     // cout << i << " " << j << endl;
                //     valid = false;
                // }
                valid = backtrack(i, j, arr);
                if (!valid) {
                    break;
                }
            }
        }
        
        cout << (valid ? "YES" : "NO") << endl;
    }
}