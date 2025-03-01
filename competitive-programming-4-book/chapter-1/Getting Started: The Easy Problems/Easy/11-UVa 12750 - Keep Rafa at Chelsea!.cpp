#include <iostream>
#include <string>

using namespace std;
int main () {
    int t;
    cin >> t;
    int cnt = 1;
    while (t--) {
        int n;
        cin >> n;
        int round = 0;
        int life = 3;
        while (n--) {
            char c;
            cin >> c;
            
            if (life > 0) {
                round++;

                if (c == 'L' || c == 'D') {
                    life--;
                } else {
                    life = 3;
                }
            }            
        }
        cout << "Case " << cnt++ << ": ";
        cout << (life > 0 ? "Yay! Mighty Rafa persists!" : to_string(round)) << endl;
    }
}