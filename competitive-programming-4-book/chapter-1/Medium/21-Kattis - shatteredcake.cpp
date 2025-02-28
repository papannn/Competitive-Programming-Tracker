#include <bits/stdc++.h>

using namespace std;
int main () {
    long long widthCake;
    int n;
    cin >> widthCake;
    cin >> n;
    long long tot = 0;
    while (n--) {
        long long w, l;
        cin >> w >> l;
        tot += w * l;
    }

    cout << tot / widthCake << endl;
}