#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    cin.ignore();
    int handCount = 1;
    while (t--) {
        int cardTake;
        cin >> cardTake;
        cin.ignore();

        unordered_set<string> oudlers = {
            "fool",
            "one of trumps",
            "twenty-one of trumps"
        };

        unordered_map<string, double> cardScores = {
            {"fool", 4.5},
            {"one of trumps", 4.5},
            {"twenty-one of trumps", 4.5},

            {"king of clubs", 4.5},
            {"king of diamonds", 4.5},
            {"king of hearts", 4.5},
            {"king of spades", 4.5},

            {"queen of clubs", 3.5},
            {"queen of diamonds", 3.5},
            {"queen of hearts", 3.5},
            {"queen of spades", 3.5},
            
            {"knight of clubs", 2.5},
            {"knight of diamonds", 2.5},
            {"knight of hearts", 2.5},
            {"knight of spades", 2.5},

            {"jack of clubs", 1.5},
            {"jack of diamonds", 1.5},
            {"jack of hearts", 1.5},
            {"jack of spades", 1.5},
        };

        string s;
        vector<string> cardList;
        while (cardTake--) {
            getline(cin, s);
            cardList.push_back(s);
        }
        
        int countOudler = 0;
        for (int i = 0 ; i < cardList.size(); i++) {
            countOudler += oudlers.find(cardList[i]) != oudlers.end();
        }

        double pointNeeded = 0;
        if (countOudler >= 3) {
            pointNeeded = 36;
        } else if (countOudler == 2) {
            pointNeeded = 41;
        } else if (countOudler == 1) {
            pointNeeded = 51;
        } else {
            pointNeeded = 56;
        }

        double point = 0;
        for (int i = 0 ; i < cardList.size(); i++) {
            if (cardScores.find(cardList[i]) == cardScores.end()) {
                point += 0.5;
            } else {
                point += cardScores[cardList[i]];
            }
        }

        cout << "Hand #" << handCount++ << endl;
        if (pointNeeded - point <= 0) {
            cout << "Game won ";
        } else {
            cout << "Game lost ";
        }

        cout << "by " << abs(pointNeeded - point) << " point(s)." << endl;
        if (t > 0) {
            cout << endl;
        }
    }
}