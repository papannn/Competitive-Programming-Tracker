#include <iostream>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int turtle;
        cin >> turtle;
        int expected = turtle * 2;
        int res = 0;
        while (turtle != 0) {
            if (turtle > expected) {
                res += turtle - expected;
            }

            expected = turtle * 2;
            cin >> turtle;            
        }
        cout << res << endl;
    }
}