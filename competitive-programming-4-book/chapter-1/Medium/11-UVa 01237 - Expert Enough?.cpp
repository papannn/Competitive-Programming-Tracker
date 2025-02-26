#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    bool flag = false;
    while (t--) {
        int database;
        cin >> database;
        vector<string> name;
        vector<long long> low;
        vector<long long> hi;

        while (database--) {
            string s;
            long long l, h;
            cin >> s >> l >> h;
            name.push_back(s);
            low.push_back(l);
            hi.push_back(h);
        }

        int query;
        cin >> query;
        if (flag) {
            cout << endl;
        }
        while (query--) {
            long long price;
            cin >> price;
            string res;
            int count = 0;
            for (int i = 0 ; i < name.size(); i++) {
                if (price >= low[i] && price <= hi[i]) {
                    if (count > 1) {
                        count++;
                        break;
                    }
                    res = name[i];
                    count++;
                }
            }
            
            cout << (count == 1 ? res : "UNDETERMINED") << endl;
        }
        flag = true;
    }
}