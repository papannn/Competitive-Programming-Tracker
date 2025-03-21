#include <bits/stdc++.h>

using namespace std;
int main () {
    int round;
    while (cin >> round) {
        if (round == -1) {
            break;
        }

        cout << "Round " << round << endl;

        string txt;
        cin >> txt;
        vector<int> res(26);
        unordered_set<char> resSet;
        for (int i = 0 ; i < txt.length(); i++) {
            resSet.insert(txt[i]);
        }
        
        string ansTxt;
        cin >> ansTxt;

        int live = 7;
        int correct = 0;
        unordered_set<char> ans;
        for (int i = 0 ; i < ansTxt.size() && live > 0 && ans.size() < resSet.size() ; i++) {
            if (resSet.find(ansTxt[i]) != resSet.end()) {
                if (ans.find(ansTxt[i]) == ans.end()) {
                    ans.insert(ansTxt[i]);
                }
            } else {
                live--;
            }
        }

        if (live == 0) {
            cout << "You lose.";
        } else if (ans.size() == resSet.size()) {
            cout << "You win.";
        } else {
            cout << "You chickened out.";
        }
        cout << endl;
    }
}