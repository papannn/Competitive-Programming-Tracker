#include <bits/stdc++.h>

using namespace std;

vector<int> shuffle(vector<int>& a, vector<int>& b) {
    int aIdx = 0;
    int bIdx = 0;
    vector<int> temp;
    while (aIdx < a.size() || bIdx < b.size()) {
        if (aIdx < a.size()) {
            temp.push_back(a[aIdx++]);
        }

        if (bIdx < b.size()) {
            temp.push_back(b[bIdx++]);
        }
    }
    return temp;
}

bool isSame(vector<int>& a, vector<int>& b) {
    for (int i = 0 ; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main () {
    int amount;
    string order;
    cin >> amount >> order;

    vector<int> cards;
    for (int i = 0 ; i < amount; i++) {   
        cards.push_back(i);
    }

    if (order.compare("out") == 0) {
        vector<int> a;
        for (int i = 0 ; i < cards.size() / 2 + (cards.size() % 2); i++) {
            a.push_back(cards[i]);
        }
        vector<int> b;
        for (int i = cards.size() / 2 + (cards.size() % 2); i < cards.size(); i++) {
            b.push_back(cards[i]);
        }

        int counter = 1;
        vector<int> temp = shuffle(a, b);
        while (!isSame(temp, cards)) {
            vector<int> a;
            for (int i = 0 ; i < temp.size() / 2 + (temp.size() % 2); i++) {
                a.push_back(temp[i]);
            }
            vector<int> b;
            for (int i = temp.size() / 2 + (temp.size() % 2); i < temp.size(); i++) {
                b.push_back(temp[i]);
            }
            temp = shuffle(a, b);
            counter++;
        }
        cout << counter << endl;
    } else {
        vector<int> a;
        for (int i = 0 ; i < cards.size() / 2; i++) {
            a.push_back(cards[i]);
        }
        vector<int> b;
        for (int i = cards.size() / 2; i < cards.size(); i++) {
            b.push_back(cards[i]);
        }
        
        int counter = 1;
        vector<int> temp = shuffle(b, a);
        while (!isSame(temp, cards)) {
            vector<int> a;
            for (int i = 0 ; i < temp.size() / 2; i++) {
                a.push_back(temp[i]);
            }
            vector<int> b;
            for (int i = temp.size() / 2; i < temp.size(); i++) {
                b.push_back(temp[i]);
            }
            temp = shuffle(b, a);
            counter++;
        }
        cout << counter << endl;
    }
}