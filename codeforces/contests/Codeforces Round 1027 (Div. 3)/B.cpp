#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int one = 0;
        int zero = 0;
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] == '1') {
                one++;
            } else {
                zero++;
            }
        }

        if (one >= k * 2) {
            one -= k * 2;
            k = 0;
        } else {
            k -= one / 2;
            one = one % 2;;
        }

        if (zero >= k * 2) {
            zero -= k * 2;
            k = 0;
        } else {
            k -= zero / 2;
            zero = zero % 2;
        }

        if (k > 0) {
            // cout << "AASD" << endl;
            cout << "NO" << endl;
            continue;
        }


        // cout << one << endl;
        // cout << zero << endl;
        if (abs(one - zero) > 1) {
            cout << "NO" << endl;
            continue;
        }
        
        cout << "YES" << endl;
        // cout << (one / 2 + zero / 2 == k ? "YES" : "NO") << endl;
    }
}