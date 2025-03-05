#include <bits/stdc++.h>

using namespace std;
int main () {
    vector<string> cards(13);
    string s;
    while (cin >> s) {
        vector<string> cards(13);
        cards[0] = s;
        for (int i = 1 ; i < 13; i++) {
            cin >> cards[i];
        }

        int point = 0;
        unordered_map<char, int> suitPoint = {
            {'A', 4},
            {'K', 3},
            {'Q', 2},
            {'J', 1}
        };

        unordered_map<char, int> suitDeduct = {
            {'K', 2},
            {'Q', 3},
            {'J', 4}
        };

        unordered_map<char, int> stopTrump = {
            {'A', 0},
            {'K', 2},
            {'Q', 3},
        };

        unordered_set<char> suitStopped;

        unordered_map<char, int> suitCount = {
            {'S', 0},
            {'H', 0},
            {'D', 0},
            {'C', 0}
        };
        for (int i = 0 ; i < cards.size(); i++) {
            suitCount[cards[i][1]]++;
            point += suitPoint[cards[i][0]];
        }
        
        for (int i = 0 ; i < cards.size(); i++) {
            if (suitCount[cards[i][1]] < suitDeduct[cards[i][0]]) {
                point -= 1;
                // cout << cards[i][0] << endl;
                // cout << "HEY" << endl;
            }

            if (stopTrump.find(cards[i][0]) != stopTrump.end()) {
                if (suitCount[cards[i][1]] >= stopTrump[cards[i][0]]) {
                    suitStopped.insert(cards[i][1]);
                }
            }   
        }

        int maxVal = 0;
        char trump;
        unordered_map<char, int> rank = {
            {'S', 4},
            {'H', 3},
            {'D', 2},
            {'C', 1}
        };
        for (auto &i : suitCount) {
            if (i.second > maxVal) {
                trump = i.first;
                maxVal = i.second;
            } else if (i.second == maxVal) {
                if (rank[i.first] > rank[trump]) {
                    trump = i.first;
                }
            }
        }


        int temp = 0;
        // if (suitStopped.size() != 4) {
            for (auto &i : suitCount) {
                if (i.second == 2) {
                    temp++;
                }
                if (i.second < 2) {
                    temp += 2;
                }
            }
        // }
        // cout << point << endl;
        // cout << point + temp << endl;
        // cout << suitStopped.size() << endl;
        if (suitStopped.size() == 4) {
            if (point >= 16) {
                cout << "BID NO-TRUMP";
            } else if (point + temp >= 14) {
                cout << "BID " << trump;
            } else if (point + temp < 14) {
                cout << "PASS";
            }
        } else {
            if (point + temp >= 14) {
                cout << "BID " << trump;
            } else {
                cout << "PASS";
            }
        }
        cout << endl;
        cards.clear();
    }
}