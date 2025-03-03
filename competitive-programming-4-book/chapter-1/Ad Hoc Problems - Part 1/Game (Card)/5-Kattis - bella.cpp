#include <bits/stdc++.h>

using namespace std;
int main () {
    unordered_map<char, int> dominant = {
        {'A', 11},
        {'K', 4},
        {'Q', 3},
        {'J', 20},
        {'T', 10},
        {'9', 14},
        {'8', 0},
        {'7', 0}
    };
    unordered_map<char, int> nonDominant = {
        {'A', 11},
        {'K', 4},
        {'Q', 3},
        {'J', 2},
        {'T', 10},
        {'9', 0},
        {'8', 0},
        {'7', 0}
    };

    int hand;
    char dom;
    cin >> hand >> dom;
    hand *= 4;
    int sum = 0;
    while (hand--) {
        string card;
        cin >> card;
        int point = dominant[card[0]];
        if (card[1] != dom) {
            point = nonDominant[card[0]];
        }
        sum += point;
    }
    cout << sum << endl;
}