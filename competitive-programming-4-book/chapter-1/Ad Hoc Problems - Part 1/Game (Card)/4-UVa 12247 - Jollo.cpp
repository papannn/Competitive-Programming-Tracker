#include <bits/stdc++.h>

using namespace std;
int main () {
    int a, b, c, x, y;
    vector<int> princessCard(3);
    vector<int> princeCard(2);
    while (cin >> princessCard[0] >> princessCard[1] >> princessCard[2] >> princeCard[0] >> princeCard[1]) {
        if (princessCard[0] == 0 && princessCard[1] == 0 && princessCard[2] == 0 && princeCard[0] == 0 && princeCard[1] == 0) {
            break;
        }

        sort(princessCard.begin(), princessCard.end());
        unordered_set<int> cardList;
        for (int i = 0 ; i < princessCard.size(); i++) {
            cardList.insert(princessCard[i]);
        }

        for (int i = 0 ; i < princeCard.size(); i++) {
            cardList.insert(princeCard[i]);
        }
        
        int lowest = 10;
        int highest = 0;
        for (int i = 0 ; i < princeCard.size(); i++) {
            int count = 0;
            for (int j = 0 ; j < princessCard.size(); j++) {
                if (princeCard[i] > princessCard[j]) {
                    count++;
                }
            }
            lowest = min(lowest, count);
            highest = max(highest, count);
        }

        int startingPoint = 0;
        
        if (highest == 3) {
            if (lowest == 3) {
                startingPoint = 1;
            } else if (lowest == 2) {
                startingPoint = princessCard[1];
            } else if (lowest == 1) {
                startingPoint = princessCard[2];
            } else {
                startingPoint = princessCard[2];
            }
        } else if (highest == 2) {
            if (lowest == 2) {
                startingPoint = princessCard[1];
            } else {
                cout << -1 << endl;
                continue;
            }
        } else if (highest <= 1) {
            cout << -1 << endl;
            continue;
        }


        while (cardList.find(startingPoint) != cardList.end()) {
            startingPoint++;
        }

        if (startingPoint >= 53) {
            cout << -1 << endl;
        } else {
            cout << startingPoint << endl;
        }
    }
}