#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    vector<string> cards;
    int count = 1;
    while (t--) {
        int amountCard = 52;
        while (amountCard--) {
            string card;
            cin >> card;
            cards.push_back(card);
        }

        deque<string> hand;
        int amountHand = 25;
        while (amountHand--) {
            string card = cards[cards.size() - 1];
            hand.push_front(card);
            cards.pop_back();
        }
        
        int y = 0;
        for (int i = 0 ; i < 3; i++) {
            string card = cards[cards.size() - 1];
            cards.pop_back();
            int x = isdigit(card[0]) ? card[0] - '0' : 10;
            y += x;
            for (int j = 0; j < 10 - x; j++) {
                cards.pop_back();
            }
        }

        while (hand.size() > 0) {
            string card = hand[0];
            cards.push_back(card);
            hand.pop_front();
        }

        cout << "Case " << count++ << ": ";
        cout << cards[y - 1] << endl;
    }
}