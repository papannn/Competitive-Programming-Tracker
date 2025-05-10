#include <bits/stdc++.h>

using namespace std;
int main () {
    int limak, bob;
    cin >> limak >> bob;
    int res = 0;
    while (limak <= bob) {
        limak *= 3;
        bob *= 2;
        res++;
    }
    cout << res << endl;
}