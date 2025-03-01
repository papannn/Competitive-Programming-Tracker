#include <iostream>

using namespace std;
int main () {
    int n, m;

    while (cin >> n >> m) {
        int res = 0;
        for (int i = 0 ; i < n; i++) {
            bool valid = true;
            for (int j = 0 ; j < m; j++) {
                int score;
                cin >> score;
                valid &= score > 0;
            }
            res += valid;
        }
        cout << res << endl;
    }
}