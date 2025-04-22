#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1714/A
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, H, M;
        cin >> n >> H >> M;
        int minH = 99;
        int minM = 99;
        while (n--) {
            int nextH, nextM;
            cin >> nextH >> nextM;
            
            int currH = H;
            int currM = M;
            int amountH = 0;
            int amountM = 0;
            while (currH != nextH || currM != nextM) {
                currM++;
                if (currM == 60) {
                    currH++;
                    currM = 0;
                }

                if (currH == 24) {
                    currH = 0;
                }

                amountM++;
                if (amountM == 60) {
                    amountM = 0;
                    amountH++;
                }
            }

            if (amountH < minH) {
                minH = amountH;
                minM = amountM;
            } else if (amountH == minH && amountM < minM) {
                minH = amountH;
                minM = amountM;
            }
        }
        
        cout << minH << " " << minM << endl;
    }
}