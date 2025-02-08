#include <iostream>

using namespace std;
int main () {
    int t;
    cin >> t;
    int count = 1;
    while (t != 0) {
        int reason = 0, give = 0;
        while (t--) {
            int n;
            cin >> n;
            if (n == 0) {
                give++;
            } else {
                reason++;
            }
        }
        cout << "Case " << count++ << ": " << reason - give << endl;
        cin >> t;
    }
    
}