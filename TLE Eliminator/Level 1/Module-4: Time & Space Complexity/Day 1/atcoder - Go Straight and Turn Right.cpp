#include <bits/stdc++.h>

using namespace std;
// https://atcoder.jp/contests/abc244/tasks/abc244_b
int main () {
    int n;
    cin >> n;

    int x = 0;
    int y = 0;
    const int RIGHT = 1;
    const int BOT = 2;
    const int LEFT = 3;
    const int UP = 4;
    int dir = RIGHT;
    while (n--) {
        char c;
        cin >> c;

        if (c == 'S') {
            if (dir == RIGHT) {
                x++;
            } else if (dir == BOT) {
                y--;
            } else if (dir == LEFT) {
                x--;
            } else {
                y++;
            }
        } else {
            if (dir == RIGHT) {
                dir = BOT;
            } else if (dir == BOT) {
                dir = LEFT;
            } else if (dir == LEFT) {
                dir = UP;
            } else {
                dir = RIGHT;
            }
        }
    }

    cout << x << " " << y << endl;
}