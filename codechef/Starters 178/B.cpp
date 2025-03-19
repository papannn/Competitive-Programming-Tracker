#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        
        if (x == y) {
            cout << x + y << endl;
            continue;
        }
        
        int res = x + y;
        res += abs(x - y) - 1;
        cout << res << endl;
    }
}
