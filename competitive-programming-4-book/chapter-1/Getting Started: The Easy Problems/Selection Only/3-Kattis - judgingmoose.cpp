#include <iostream>
#include <math.h>

using namespace std;
int main() {
    int l,r;
    cin >> l >> r;
    
    if (l == 0 && r == 0) {
        cout << "Not a moose" << endl;
        return 0;
    }

    cout << (l == r ? "Even " : "Odd ") << (max(l, r) * 2) << endl;
}