#include <bits/stdc++.h>

using namespace std;
int main () {
    int n;
    cin >> n;
    
    vector<vector<char>> drawing;
    // char drawing[n + 1][n + 1];
    for (int i = 0 ; i < n; i++) {
        // drawing.push_back
        vector<char> temp;
        for (int j = 0 ; j < n; j++) {
            // drawing[i][j] = '?';
            temp.push_back('?');
        }
        drawing.push_back(temp);
    }

    cout << "HI" << endl;
    // for (int i = 0 ; i < n; i++) {
    //     for (int j = 0 ; j < n; j++) {
    //         cout << drawing[i][j];
    //     }
    //     cout << endl;
    // }

    int start = 0;
    int idxY = start;
    int idxX = start;
    bool isBlack = true;
    while (start < 50) {
        // Right
        cout << "BOy" << endl;
        while (idxX <= n && drawing[idxY][idxX] == '?') {
            drawing[idxY][idxX] = isBlack ? '#' : '.';
            idxX++;
        }
        idxX--;
        idxY++;

        cout << "HELLO" << endl;
        cout << idxX << endl;
        cout << idxY << endl;
        cout << drawing.size() << endl;
        cout << drawing[idxX].size() << endl;
        // Down
        while (idxY <= n && drawing[idxY][idxX] == '?') {
            drawing[idxY][idxX] = isBlack ? '#' : '.';
            idxY++;
        }
        idxY--;
        idxX--;

        cout << "HELLO1" << endl;
        cout << idxX << endl;
        cout << idxY << endl;
        while (idxX - 1 >= -1 && drawing[idxY][idxX] == '?') {
            cout << idxX << endl;
            drawing[idxY][idxX] = isBlack ? '#' : '.';
            idxX--;
        }
        idxX++;
        idxY--;

        cout << "HELLO2" << endl;
        while (idxY - 1 >= -1 && drawing[idxY][idxX] == '?') {
            drawing[idxY][idxX] = isBlack ? '#' : '.';
            idxY--;
        }

        start++;
        idxX = start;
        idxY = start;
        isBlack = !isBlack;
        // Top
    }
    for (int i = 0 ; i < n; i++) {
        for (int j = 0 ; j < n; j++) {
            cout << drawing[i][j];
        }
        cout << endl;
    }
}