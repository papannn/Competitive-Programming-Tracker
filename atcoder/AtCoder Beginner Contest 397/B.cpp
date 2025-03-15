#include <bits/stdc++.h>

using namespace std;
int main () {
    string s;
    cin >> s;

    bool isI = true;
    int res = 0;
    for (int i = 0 ; i < s.length(); i++) {
        if (isI && s[i] != 'i') {
            res++;
            isI = !isI;
        }

        if (!isI && s[i] == 'i') {
            res++;
            isI = !isI;
        }

        isI = !isI;
    }

    if (!isI) {
        res++;
    }
    cout << res << endl;
}