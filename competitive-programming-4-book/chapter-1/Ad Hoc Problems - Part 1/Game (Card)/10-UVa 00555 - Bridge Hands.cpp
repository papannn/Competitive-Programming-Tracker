#include <bits/stdc++.h>

using namespace std;
int main () {
    while (true) {
        char c;
        cin >> c;
        if (c == '#') {
            break;
        }

        unordered_map<char, int> posSuit = {
            {'C', 0},
            {'D', 1},
            {'S', 2},
            {'H', 3}
        };

        unordered_map<int, char> reversePosSuit = {
            {0, 'C'},
            {1, 'D'},
            {2, 'S'},
            {3, 'H'}
        };

        unordered_map<char, int> posNum = {
            {'2', 0},
            {'3', 1},
            {'4', 2},
            {'5', 3},
            {'6', 4},
            {'7', 5},
            {'8', 6},
            {'9', 7},
            {'T', 8},
            {'J', 9},
            {'Q', 10},
            {'K', 11},
            {'A', 12}
        };

        unordered_map<int, char> reversePosNum = {
            {0, '2'},
            {1, '3'},
            {2, '4'},
            {3, '5'},
            {4, '6'},
            {5, '7'},
            {6, '8'},
            {7, '9'},
            {8, 'T'},
            {9, 'J'},
            {10, 'Q'},
            {11, 'K'},
            {12, 'A'}
        };

        vector<int> posArr = {2,3,0,1};

        unordered_map<int, char> resMap = {
            {0, 'N'},
            {1, 'E'},
            {2, 'S'},
            {3, 'W'}
        };

        unordered_map<char, int> mapping = {
            {'N', 0},
            {'E', 1},
            {'S', 2},
            {'W', 3}
        };

        int pos = mapping[c];
        int amt = 52;
        vector<vector<vector<bool>>> hands;
        for (int i = 0 ; i < 4; i++) {
            vector<vector<bool>> temp;
            
            // Suit
            for (int j = 0 ; j < 4; j++) {
                vector<bool> suit;
                for (int k = 0 ; k < 13; k++) {
                    suit.push_back(false);
                }
                temp.push_back(suit);
            }
            hands.push_back(temp);
        }

        while (amt--) {
            pos++;
            if (pos == 4) {
                pos = 0;
            }

            char suit;
            char num;
            cin >> suit >> num;
            hands[pos][posSuit[suit]][posNum[num]] = true;
        }
        
        for (int i = 0 ; i < posArr.size(); i++) {
            char res = resMap[posArr[i]];
            cout << res << ": ";
            int counter = 0;
            for (int j = 0 ; j < 4; j++) {
                for (int k = 0 ; k < 13; k++) {
                    if (hands[posArr[i]][j][k]) {
                        counter++;
                        cout << reversePosSuit[j] << reversePosNum[k];
                        if (counter < 13) 
                        cout << " ";
                    }
                }
            }
            cout << endl;
        }
    }
    
}