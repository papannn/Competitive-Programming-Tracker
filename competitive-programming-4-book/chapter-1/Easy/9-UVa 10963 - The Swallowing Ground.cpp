#include <iostream>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        getchar();
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
    }
}