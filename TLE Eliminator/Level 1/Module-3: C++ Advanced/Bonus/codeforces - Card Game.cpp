#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1999/B
int main () {
    int t;
    cin >> t;
    while (t--) {
        vector<int> suneet(2);
        vector<int> slavic(2);

        cin >> suneet[0] >> suneet[1] >> slavic[0] >> slavic[1];
        
        int res = 0;
        res += suneet[0] > slavic[0] && suneet[1] > slavic[1];//--
        res += suneet[0] > slavic[1] && suneet[1] > slavic[0];//--
        res += suneet[1] > slavic[0] && suneet[0] > slavic[1];//--
        res += suneet[1] > slavic[1] && suneet[0] > slavic[0];//--

        res += suneet[0] == slavic[0] && suneet[1] > slavic[1];
        res += suneet[0] > slavic[0] && suneet[1] == slavic[1];
        
        res += suneet[0] == slavic[1] && suneet[1] > slavic[0];
        res += suneet[0] > slavic[1] && suneet[1] == slavic[0];

        res += suneet[1] == slavic[0] && suneet[0] > slavic[1];
        res += suneet[1] > slavic[0] && suneet[0] == slavic[1];

        res += suneet[1] == slavic[1] && suneet[0] > slavic[0];
        res += suneet[1] > slavic[1] && suneet[0] == slavic[0];
        cout << res << endl;
    }
}