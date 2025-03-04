#include <bits/stdc++.h>

using namespace std;
int main () {
    while (true) {
        deque<string> hand[2];
        bool isDealer = false;
        
        int amount = 52;
        bool flag = false;
        while (amount--) {
            string card;
            cin >> card;
            if (card.compare("#") == 0) {
                flag = true;
            }
            hand[isDealer].push_back(card);
            isDealer = !isDealer;
        }

        if (flag) {
            break;
        }

        deque<string> heapCard;
        unordered_map<char, int> faceVal = {
            {'J', 1},
            {'Q', 2},
            {'K', 3},
            {'A', 4}
        };
        while (true) {
            deque<string> *currHand = &hand[isDealer];
            if (currHand->size() == 0) {
                break;
            }
            string card = (*currHand)[currHand->size() - 1];
            heapCard.push_back(card);
            currHand->pop_back();
            isDealer = !isDealer;

            int amtCover = faceVal[card[1]];
            if (amtCover > 0) {
                while (amtCover > 0 && hand[isDealer].size() > 0) {
                    deque<string> *currHand = &hand[isDealer];
                    string card = (*currHand)[currHand->size() - 1];
                    heapCard.push_back(card);
                    currHand->pop_back();
                    int amt = faceVal[card[1]];
                    if (amt > 0) {
                        amtCover = amt;
                        isDealer = !isDealer;
                    } else {
                        amtCover--;
                    }
                }

                if (hand[isDealer].size() == 0 && amtCover > 0) {
                    break;
                }

                isDealer = !isDealer;
                deque<string> *currHand = &hand[isDealer];
                while (heapCard.size() > 0) {
                    string card = heapCard[0];
                    currHand->push_front(card);
                    heapCard.pop_front();
                }
            }
        }

        if (!isDealer) {
            cout << 1 << setw(3) << hand[1].size() << endl;
        } else {
            cout << 2 << setw(3) << hand[0].size() << endl;
        }
    }
}