#include <iostream>

using namespace std;
int main () {
    int t;
    cin >> t;
    int tb = 0, lr = 0;
    while (t--) {
        string s;
        cin >> s;
        tb += !(s[0] - '0');
        tb += !(s[1] - '0');
        lr += !(s[2] - '0');
        lr += !(s[3] - '0');
    }
    cout << (min(tb / 2, lr / 2)) << " " << tb - 2 * min(tb / 2, lr / 2) << " " << lr - 2 * min(tb / 2, lr / 2) << endl;
}