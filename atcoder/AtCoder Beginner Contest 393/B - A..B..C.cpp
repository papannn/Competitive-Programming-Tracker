#include <iostream>

using namespace std;
int main () {
    string s;
    cin >> s;
    int res = 0;
    for (int i = 1 ; i < s.length() - 1; i++) {
        if (s[i] != 'B') {
            continue;
        }

        int gap = 1;
        while (i - gap >= 0 && gap + i < s.length()) {
            int left = i - gap;
            int right = gap + i;
            
            if (s[left] == 'A' && s[i] == 'B' && s[right] == 'C') {
                res++;
            }
            gap++;
        }
    }
    cout << res << endl;
}