#include <bits/stdc++.h>

using namespace std;
int main () {
    int card;
    int turn;
    
    cin >> card;
    cin >> turn;

    unordered_set<int> posRevealed;
    unordered_map<string, int> countImg;
    int counter = 0;
    while (turn--) {
        int a, b;
        string nameA, nameB;
        cin >> a >> b >> nameA >> nameB;

        if (posRevealed.find(a) == posRevealed.end()) {
            countImg[nameA]++;
            posRevealed.insert(a);
            counter++;
        }

        if (posRevealed.find(b) == posRevealed.end()) {
            countImg[nameB]++;
            posRevealed.insert(b);
            counter++;
        }

        if (nameA.compare(nameB) == 0 && a != b) {
            card -= 2;
            counter -= 2;
            countImg.erase(nameA);
        }
    }

    if (countImg.size() * 2 == card) {
        cout << countImg.size() << endl;
    } else {
        int res = 0;
        for (auto &i : countImg) {
            res += i.second == 2;
        }
        
        if (card - counter <= 2) {
            res++;
        }

        cout << res << endl;
    }
}