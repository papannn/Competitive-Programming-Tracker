#include <bits/stdc++.h>

using namespace std;

class Piece {
public:
    bool isBlack;
    string notation;

    Piece(bool i, string n): isBlack(i), notation(n) {}

    bool operator<(const Piece& obj) const {
        unordered_map<char, int> pieceRank = {
            {'K', 5},
            {'Q', 4},
            {'R', 3},
            {'B', 2},
            {'N', 1}
        };
        char myPieceClass = this->notation[0];
        char theirPieceClass = obj.notation[0];
        
        int myRank = pieceRank[myPieceClass];
        int theirRank = pieceRank[theirPieceClass];

        if (myRank > theirRank) {
            return true;
        } else if (myRank < theirRank) {
            return false;
        }

        int myRow;
        int theirRow;
        if (myRank == 0) {
            myRow = notation[1] - '0';
            theirRow = obj.notation[1] - '0';
        } else {
            myRow = notation[2] - '0';
            theirRow = obj.notation[2] - '0';
        }

        if (this->isBlack) {
            if (myRow > theirRow) {
                return true;
            } else if (myRow < theirRow) {
                return false;
            }
        } else {
            if (myRow < theirRow) {
                return true;
            } else if (myRow > theirRow) {
                return false;
            }
        }
        
        int myCol;
        int theirCol;

        if (myRank == 0) {
            myCol = notation[0] - 'a';
            theirCol = obj.notation[0] - 'a';
        } else {
            myCol = notation[1] - 'a';
            theirCol = obj.notation[1] - 'a';
        }

        return myCol < theirCol;
    }
};

int main () {
    bool isBarrier = true;
    string s;
    int row = 8;
    vector<Piece> whitePieces;
    vector<Piece> blackPieces;
    while (getline(cin, s)) {
        if (!isBarrier) {
            int idx = 0;
            int col = 0;
            while (idx < s.length()) {
                if (!isalpha(s[idx + 2])) {
                    idx += 4;
                    col++;
                    continue;
                }
                char colChar = col + 'a';
                string temp = "";
                if (s[idx + 2] != 'P' && s[idx + 2] != 'p') {
                    temp += toupper(s[idx + 2]);
                } 

                temp += colChar;
                temp += to_string(row);
                if (islower(s[idx + 2])) {
                    blackPieces.push_back({true, temp});
                } else {
                    whitePieces.push_back({false, temp});
                }
                
                idx += 4;
                col++;
            }
            row--;
        }
        isBarrier = !isBarrier;
    }

    sort(whitePieces.begin(), whitePieces.end());
    sort(blackPieces.begin(), blackPieces.end());
    cout << "White: ";
    for (int i = 0 ; i < whitePieces.size(); i++) {
        cout << whitePieces[i].notation;
        if (i != whitePieces.size() - 1)
            cout << ",";
    }
    cout << endl;

    cout << "Black: ";
    for (int i = 0 ; i < blackPieces.size(); i++) {
        cout << blackPieces[i].notation;
        if (i != blackPieces.size() - 1)
            cout << ",";
    }
    cout << endl;
}