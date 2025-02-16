#include <iostream>

using namespace std;
int main () {
    int t;
    cin >> t;
    int x = t;
    getchar();
    while (t--) {
        int n;
        cin >> n;
        n--;
        int a, b;
        cin >> a >> b;
        int diff = abs(a-b);
        bool possible = true;
        while (n--) {
            cin >> a >> b;
            if (abs(a-b) != diff) {
                possible = false;
            }
        }
        
        cout << (possible ? "yes" : "no") << endl;
        if (x > 1 && t != 0) {
            cout << endl;
        }
    }
}