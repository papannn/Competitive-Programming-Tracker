#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1989/A
int main () {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int currX = 0;
        int currY = 0;

        bool valid = false;
        while (true) {
            if (x > currX) {
                currX++;
                
            } else if (x < currX) {
                currX--;
            }

            if (y < currY) {
                currY--;
            }
            
            if (currX == x) {
                break;
            }

            y--;
        }

        cout << (currY <= y ? "YES" : "NO") << endl;
    }
}