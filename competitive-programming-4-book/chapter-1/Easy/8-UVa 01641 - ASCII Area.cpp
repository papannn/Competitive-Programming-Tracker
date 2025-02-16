#include <iostream>

using namespace std;
int main () {
    int h, w;
    while (cin >> h >> w) {
        string s[h];
        for (int i = 0 ; i < h; i++) {
            cin >> s[i];
        }

        int sum = 0;
        for (int i = 0 ; i < h; i++) {
            bool open = false;
            for (int j = 0 ; j < w; j++) {
                if (s[i][j] == '.' && open) {
                    sum += 2;
                }

                if (s[i][j] == '/' || s[i][j] == '\\') {
                    sum += 1;
                    open = !open;
                }
            }
        }

        cout << sum / 2 << endl;
    }
    
}