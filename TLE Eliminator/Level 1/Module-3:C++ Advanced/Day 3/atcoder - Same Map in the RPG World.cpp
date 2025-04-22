#include <bits/stdc++.h>

using namespace std;
// https://atcoder.jp/contests/abc300/tasks/abc300_b
int main () {
    int h, w;
    cin >> h >> w;
    deque<deque<char>> arr;
    for (int i = 0 ; i < h; i++) {
        deque<char> temp;
        for (int j = 0 ; j < w; j++) {
            char c;
            cin >> c;
            temp.push_back(c);
        }
        arr.push_back(temp);
    }

    deque<deque<char>> comp;
    for (int i = 0 ; i < h; i++) {
        deque<char> temp;
        for (int j = 0 ; j < w; j++) {
            char c;
            cin >> c;
            temp.push_back(c);
        }
        comp.push_back(temp);
    }

    bool valid = false;
    for (int i = 0 ; i < h; i++) {
        arr.push_front(arr[arr.size() - 1]);
        arr.pop_back();
        for (int j = 0 ; j < w; j++) {
            for (int k = 0 ; k < h; k++) {
                arr[k].push_front(arr[k][arr[k].size() - 1]);
                arr[k].pop_back();
            }

            bool localValid = true;
            for (int l = 0 ; l < h; l++) {
                for (int m = 0; m < w; m++) {
                    if (arr[l][m] != comp[l][m]) {
                        localValid = false;
                    }
                }
            }
            valid |= localValid;
        }
    }

    cout << (valid ? "Yes" : "No") << endl;
}