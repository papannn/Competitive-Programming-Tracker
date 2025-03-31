#include <bits/stdc++.h>

using namespace std;
int main () {
    int n;
    int game = 1;
    while (cin >> n) {
        if (n == 0) {
            break;
        }

        vector<char> secretCode;
        for (int i = 0 ; i < n; i++) {
            char c;
            cin >> c;
            secretCode.push_back(c);
        }

        bool flag = true;
        cout << "Game " << game++ << ":" << endl;
        while (true) {
            vector<char> guess;
            for (int i = 0; i < n; i++) {
                char c;
                cin >> c;
                if (c == '0') {
                    flag = false;
                }

                guess.push_back(c);
            }

            if (!flag) {
                break;
            }

            unordered_map<char, int> secretDiff;
            unordered_map<char, int> guessDiff;
            int correct = 0;
            for (int i = 0; i < n; i++) {
                if (guess[i] == secretCode[i]) {
                    correct++;
                } else {
                    secretDiff[secretCode[i]]++;
                    guessDiff[guess[i]]++;
                }
            }

            int diff = 0;
            for (auto i : secretDiff) {
                if (i.second > guessDiff[i.first]) {
                    diff += guessDiff[i.first];
                } else {
                    diff += i.second;
                }
            }

            cout << "    (" << correct << "," << diff << ")" << endl;
        }
    }
}