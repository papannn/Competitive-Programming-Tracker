#include <bits/stdc++.h>

using namespace std;
// https://atcoder.jp/contests/abc309/tasks/abc309_b
int main () {
    int n;
    cin >> n;

    vector<string> arr;
    for (int i = 0 ; i < n; i++) {
        string s;
        cin >> s;
        arr.push_back(s);
    }

    
    int xDir = 1;
    int yDir = 0;
    int x = 0;
    int y = 0;
    deque<char> corner;
    bool started = false;
    corner.push_back(arr[y][x]);
    while ((x != 0 || y != 0) || !started) {
        started = true;
        
        y += yDir;
        x += xDir;

        if (y != n && x != n && y != -1 && x != -1) {
            corner.push_back(arr[y][x]);
        }
        if (x == n) { // Out of bound right
            x--;
            xDir = 0;
            yDir = 1;
        }

        if (y == n) { // Out of bound bottom
            y--;
            xDir = -1;
            yDir = 0;
        }

        if (x == -1) { // Out of bound left
            x++;
            xDir = 0;
            yDir = -1;
        }
    }

    corner.pop_back();

    corner.push_front(corner[corner.size() - 1]);
    corner.pop_back();

    x = 0;
    y = 0;
    yDir = 0;
    xDir = 1;
    arr[y][x] = corner[0];
    corner.pop_front();
    while (!corner.empty()) {
        y += yDir;
        x += xDir;

        if (y != n && x != n && y != -1 && x != -1) {
            arr[y][x] = corner[0];
            corner.pop_front();
        }

        if (x == n) { // Out of bound right
            x--;
            xDir = 0;
            yDir = 1;
        }

        if (y == n) { // Out of bound bottom
            y--;
            xDir = -1;
            yDir = 0;
        }

        if (x == -1) { // Out of bound left
            x++;
            xDir = 0;
            yDir = -1;
        }
    }

    for (int i = 0 ; i < n; i++) {
        cout << arr[i] << endl;
    }
}