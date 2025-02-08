#include <iostream>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        n--;
        int prev;
        cin >> prev;
        int count = 2;
        bool found = false;
        while (n--) {
            int curr;
            cin >> curr;
            if (!found && curr != prev + 1) {
                found = true;
                cout << count << endl;
            }
            prev = curr;
            count++;
        }
    }
}