#include <iostream>

using namespace std;
int main () {
    int tea;
    while (cin >> tea) {
        int res= 0;
        for (int i = 0 ; i < 5; i++) {
            int ans;
            cin >> ans;
            if (ans == tea) {
                res++;
            }
        }
        cout << res << endl;
    }
}