#include <iostream>

using namespace std;
int main () {
    int n;
    while (cin >> n) {
        if (n == 0) {
            break;
        }

        string s;
        cin >> s;
        int restaurantPos = -1;
        int drugPos = -1;
        int minPos = 1e9;
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] == 'Z') {
                minPos = 0;
                break;
            }

            if (s[i] == 'D') {
                drugPos = i;
                if (restaurantPos != -1) {
                    minPos = min(minPos, abs(restaurantPos - drugPos));
                }
            }

            if (s[i] == 'R') {
                restaurantPos = i;
                if (drugPos != -1) {
                    minPos = min(minPos, abs(restaurantPos - drugPos));
                }
            }
        }

        cout << minPos << endl;
    }
}