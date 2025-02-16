#include <iostream>

using namespace std;
int main () {
    int L, x;
    cin >> L >> x;
    int curr = 0;
    int res = 0;
    while (x--) {
        string event;
        int cnt;
        cin >> event >> cnt;
        
        if (event.compare("enter") == 0) {
            if (curr + cnt > L) {
                res++;
            } else {
                curr += cnt;
            }
        } else {
            curr -= cnt;
        }
    }
    cout << res << endl;
}