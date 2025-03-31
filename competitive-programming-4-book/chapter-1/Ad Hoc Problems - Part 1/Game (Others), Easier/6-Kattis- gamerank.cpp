#include <bits/stdc++.h>

using namespace std;
int main () {
    
    int counter = 0;
    int star = 2;
    vector<int> rankStar(26);
    for (int i = 25 ; i >= 1; i--) {    
        if (counter == 5 && star <= 4) {
            counter = 0;
            star++;
        }

        if (counter == 10) {
            star++;
        }
        counter++;
        rankStar[i] = star;
    }

    string match;
    cin >> match;

    int streak = 0;
    int starCount = 0;
    int currRank = 25;
    for (int i = 0 ; i < match.length(); i++) {
        if (match[i] == 'W') {
            if (currRank == 0) {
                continue;
            }
            streak++;
            if (currRank >= 6 && streak >= 3) {
                starCount++;
            }

            if (starCount > rankStar[currRank]) {
                currRank--;
                starCount = 1;
            }

            starCount++;
            if (starCount > rankStar[currRank]) {
                currRank--;
                starCount = 1;
            }
        } else {
            streak = 0;
            if (currRank == 0 || (starCount == 0 && currRank == 20)) {
                continue;
            } else if (currRank <= 20) {
                if (starCount == 0) {
                    currRank++;
                    starCount = rankStar[currRank] - 1;
                } else {
                    starCount--;
                }
            }
        }
    }

    if (currRank != 0) {
        cout << currRank << endl;
    } else {
        cout << "Legend" << endl;
    }
    
}