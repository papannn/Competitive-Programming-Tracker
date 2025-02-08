#include <iostream>

using namespace std;
int main () {
    int t;
    cin >> t;
    
    while (t != -1) {
        int tc = t;
        int hour = 0;
        int tot = 0;
        while (tc--) {
            int speed, time;
            cin >> speed >> time;
            tot += speed * (time - hour);
            hour = time;
        }
        cout << tot << " miles" << endl;
        cin >> t;
    }
}