#include <iostream>

using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;
        cout << x << " is " << (x % 2 == 0 ? "even" : "odd") << endl;
    }
}