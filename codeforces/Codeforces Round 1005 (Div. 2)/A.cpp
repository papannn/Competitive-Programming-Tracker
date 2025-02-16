#include <iostream>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        int res = 0;
        char prev = '0';
        for (int i = 0 ; i < s.length() ; i++) {
            if (s[i] != prev) {
                res++;
                prev = s[i];
            }
        }

        cout << res << endl;
    }
}