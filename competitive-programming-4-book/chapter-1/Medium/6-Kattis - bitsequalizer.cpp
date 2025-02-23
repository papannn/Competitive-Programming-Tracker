#include <iostream>

using namespace std;
int main () {
    int test;
    cin >> test;
    int counterCase = 1;
    while (test--) {
        string s;
        string t;
        cin >> s >> t;

        int countOneS = 0;
        int countOneT = 0;
        int countQuesS = 0;
        for (int i = 0 ; i < t.length(); i++) {
            if (s[i] == '1') {
                countOneS++;
            }

            if (s[i] == '?') {
                countQuesS++;
            }

            if (t[i] == '1') {
                countOneT++;
            }
        }

        cout << "Case " << counterCase++ << ": ";
        if (countOneS > countOneT) {
            cout << -1 << endl;
            continue;
        }

        int res = 0;
        int diff = countOneT - countOneS;
        for (int i = 0 ; i < t.length(); i++) {
            if (s[i] == '?' && t[i] == '1') {
                if (diff > 0) {
                    s[i] = '1';
                    diff--;
                    countOneS++;
                    countQuesS--;
                } else {
                    s[i] = '0';
                }
                res++;
            }
        }

        int counter = 0;
        for (int i = 0 ; i < t.length() ; i++) {
            if (s[i] == '?') {
                s[i] = '0';
            }
            
            if (s[i] != t[i]) {
                counter++;
            }
        }

        res += counter / 2;
        res += countQuesS;
        res += diff;
        
        cout << res << endl;
    }
}