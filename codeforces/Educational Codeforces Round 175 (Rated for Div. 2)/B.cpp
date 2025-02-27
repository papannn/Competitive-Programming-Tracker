#include <bits/stdc++.h>

using namespace std;
int main () {
    long long t;
    cin >> t;
    while (t--) {
        long long n, pos, sec;
        cin >> n >> pos >> sec;

        vector<long long> posArr;
        posArr.push_back(0);
        bool running = true;
        bool found = false;
        long long res = 0;
        long loc = -1;
        while (n--) {
            char c;
            cin >> c;
            int delta = c == 'L' ? -1 : 1;
            long long val = posArr[posArr.size() - 1] + delta;
            posArr.push_back(val);
            if (running) {
                sec--;
            }
            
            if (running && val + pos == 0) {
                running = false;
                res++;
            }

            if (!found && val == 0) {
                loc = posArr.size() - 1;
                found = true;
            }
        }

        if (!running && loc != -1) {
            res += sec / loc;
        }
        // cout << sec << endl;
        cout << res << endl;
        // cout << endl;
        // for (int i = 0 ; i < posArr.size(); i++) {
        //     cout <<  posArr[i] + pos << " ";
        // }
        // cout << endl;
        // for (int i = 0 ; i < posArr.size(); i++) {
        //     cout <<  posArr[i] + 0 << " ";
        // }
        // cout << endl;
        // cout << endl;
    }
}