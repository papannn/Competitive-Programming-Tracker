#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    cin.ignore();
    bool flag = true;
    while (t--) {
        if (flag) {
            string dummy;
            getline(cin, dummy);
            flag = false;
        }
        
        int shuffleCount;
        cin >> shuffleCount;
        cin.ignore();
        vector<vector<int>> shuffleArr;

        int shuffleGet = shuffleCount;
        while (shuffleGet--) {
            int cardCount = 52;
            vector<int> shuffleIdx;
            while (cardCount--) {
                int idx;
                cin >> idx;
                cin.ignore();
                shuffleIdx.push_back(idx);
            }
            shuffleArr.push_back(shuffleIdx);
        }

        vector<vector<int>> realShuffleArr;
        while (true) {
            string idx;
            getline(cin, idx);
            // cout << idx.length() << endl;
            if (idx.length() == 0) {
                break;
            }

            int intIdx = stoi(idx) - 1;
            // cout << intIdx << endl;
            realShuffleArr.push_back(shuffleArr[intIdx]);
        }
        // cout << endl;
        // cout << realShuffleArr.size() << endl;
        vector<int> currIdx;
        for (int i = 1; i <= 52; i++) {
            currIdx.push_back(i);
        }

        for (int i = 0 ; i < realShuffleArr.size(); i++) {
            vector<int> tempIdx(52);
            for (int j = 0; j < 52; j++) {
                tempIdx[realShuffleArr[i][j] - 1] = currIdx[j];
                // cout << tempIdx[realShuffleArr[i][j] - 1] << " ";
            }
            currIdx = tempIdx;
        }
        
        unordered_map<int, string> suitMapping = {
            {0, "Clubs"},
            {1, "Diamonds"},
            {2, "Hearts"},
            {3, "Spades"}
        };

        unordered_map<int, string> numberMapping = {
            {11, "Jack"},
            {12, "Queen"},
            {13, "King"},
            {14, "Ace"}
        };

        for (int i = 0 ; i < currIdx.size(); i++) {
            int num = ((currIdx[i] - 1) % 13) + 2;
            if (numberMapping.find(num) != numberMapping.end()) {
                cout << numberMapping[num];
            } else {
                cout << num;
            }
            cout << " of ";
            cout << suitMapping[(currIdx[i] - 1) / 13] << endl;
        }
        if (t != 0)
        cout << endl;
    }
}