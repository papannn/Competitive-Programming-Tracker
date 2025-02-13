#include <iostream>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        // 710 - 8 - 8
        // 711 - 9  - 9
        // 712 - 10 - 1
        // 713 - 11 - 2
        // 714 - 12 - 3
        // 715 - 13 - 4
        // 716 - 14 - 5
        // 717 - 15 - 6
        // 718 - 16 - 7
        // 719 - 17 - 8
        // 720 - 9 - 9
        
        // 62129 - 20 - 2
        // 62130 - 12 - 3
        // 62131 - 13 - 4
        // 62132 - 14 - 5
        // 62133 - 15 - 6
        // 62134 - 16 - 7
        // 62135 - 17 - 8
        // 61236 - 18 - 9
        // 61237 - 19 - 10 - 1
        // 61238 - 20 - 2
        // 61239 - 21 - 3
        // 61240 - 13 - 4
        // 61241 - 14 - 5
        // 61242 - 15 - 6
        // 61243 - 16 - 7
        // 61244 - 17 - 8
        // 61245 - 18 - 9
        // 61246 - 19 - 1
        // 61247 - 20 - 2
        // 61248 - 21 - 3
        // 61249 - 22 - 4
        // 61250 - 23 - 5
        // 61251 - 24 -
        int a, b;
        cin >> a >> b;
        
        if (a + 1 == b || (a == 9 && b == 1)) {
            cout << "Yes" << endl;
            continue;
        }

        if (a <= 9) {
            cout << "No" << endl;
            continue;
        }

        int tempA = a;
        int pos;
        while (tempA > 9) {
            pos = 0;
            while (tempA != 0) {
                pos += tempA % 10;
                tempA /= 10;
            }
            tempA = pos;
        }

        if (tempA + 1 == b || (tempA == 9 && b == 1)) {
            cout << "Yes" << endl;
            continue;
        }

        int tempB = b;
        while (tempB > 9) {
            pos = 0;
            while (tempB != 0) {
                pos += tempB % 10;
                tempB /= 10;
            }
            tempB = pos;
        }

        if (tempA + 1 == tempB || (tempA == 9 && tempB == 1)) {
            cout << "Yes" << endl;
            continue;
        }

        cout << "No" << endl;
        // cout << endl;
        
    }
}