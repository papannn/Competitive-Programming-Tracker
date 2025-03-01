#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
int main () {
    int t;
    bool flag = false;
    while (cin >> t) {
        vector<string> names;
        unordered_map<string, int> mapName;
        while (t--) {
            string s;
            cin >> s;
            names.push_back(s);
        }

        int len = names.size();
        while (len--) {
            string name;
            int money;
            int amountPpl;
            cin >> name >> money >> amountPpl;
            int left = 0;
            if (amountPpl > 0) {
                left = money % amountPpl;
                mapName[name] -= (money - left);
            }
            
            if (amountPpl > 0) {
                int moneySent = money / amountPpl;
                while (amountPpl--) {
                    string nameSend;
                    cin >> nameSend;
                    mapName[nameSend] += moneySent;
                }
            }
        }

        if (flag) {
            cout << endl;
        }
        for (int i = 0 ; i < names.size(); i++) {
            cout << names[i] << " " << mapName[names[i]] << endl;
        }

        flag = true;
    }
}