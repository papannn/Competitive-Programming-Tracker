#include <iostream>

using namespace std;
void execCommand(vector<string>& sArr, string s, int& pos) {
    if (s.compare("LEFT") == 0) {
        pos--;
        sArr.push_back(s);
    } else if (s.compare("RIGHT") == 0) {
        pos++;
        sArr.push_back(s);
    } else {
        char cStr[s.length() + 1];
        for (int i = 0 ; i < s.length() ; i++) {
            cStr[i] = s[i];
        }
        cStr[s.length()] = '\0';
        int command = atoi(strtok(cStr, "SAME AS")) - 1;
        execCommand(sArr, sArr[command], pos);
    }
}

int main () {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int command;
        cin >> command;
        cin.ignore();
        vector<string> sArr;
        int pos = 0;
        while (command--) {
            string s;
            getline(cin, s);
            execCommand(sArr, s, pos);
        }
        cout << pos << endl;
    }
}