#include <bits/stdc++.h>

using namespace std;
int main () {
    string s;
    cin >> s;
    
    unordered_map<char, int> counterSuit = {
        {'P', 0},
        {'K', 0},
        {'H', 0},
        {'T', 0}
    };

    unordered_set<string> cardChecker;
    for (int i = 0 ; i < s.length(); ) {
        string temp = "";
        temp += s[i];
        temp += s[i + 1];
        temp += s[i + 2];

        if (cardChecker.find(temp) != cardChecker.end()) {
            cout << "GRESKA" << endl;
            return 0;
        }

        cardChecker.insert(temp);
        counterSuit[s[i]]++;
        i += 3;
    }

    cout << 13 - counterSuit['P'] << " " << 13 - counterSuit['K'] << " " << 13 - counterSuit['H'] << " " << 13 - counterSuit['T'] << endl;
}