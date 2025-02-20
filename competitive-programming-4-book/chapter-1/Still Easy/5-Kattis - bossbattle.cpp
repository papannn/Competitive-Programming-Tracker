#include <iostream>

using namespace std;
int main () {
    int n;
    cin >> n;
    int pos = 2;
    int bossPos = n - 1;
    int res = 0;
    while (abs(bossPos % n - pos % n) > 0) {
        bossPos++;
        pos += 2;
        res++;
    }
    cout << res + 1 << endl;
}