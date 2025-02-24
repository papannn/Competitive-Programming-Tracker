#include <iostream>

using namespace std;
int main () {
    int n;
    while (cin >> n) {
        if (n == 0) {
            break;
        }

        string res = "";
        bool flag = true;
        int maxVal = 0;
        while (n--) {
            string s;
            cin >> s;

            if (flag) {
                flag = !flag;
                res = s;
            }

            int counter = 0;
            for (int i = 0 ; i < s.length() - 1; i++) {
                char c = s[i];
                char c1 = s[i + 1];
                if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o' || c == 'y') {
                    if (c == c1) {
                        counter++;
                        if (counter > maxVal) {
                            maxVal = counter;
                            res = s;
                        }
                    }
                }
            }
        }
        cout << res << endl;
    }
}