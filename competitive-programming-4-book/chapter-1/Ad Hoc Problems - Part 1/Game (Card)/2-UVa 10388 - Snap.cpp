#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string dummy;
        getline(cin, dummy);
        string janeCloseStr;
        string johnCloseStr;

        cin >> janeCloseStr;
        cin >> johnCloseStr;

        deque<char> janeClose;
        deque<char> johnClose;

        for (int i = 0; i < janeCloseStr.length(); i++) {
            janeClose.push_back(janeCloseStr[i]);
            johnClose.push_back(johnCloseStr[i]);
        }

        int round = 0;
        int totalCard = janeClose.size() + johnClose.size();

        deque<char> janeOpen;
        deque<char> johnOpen;

        while (
            (janeOpen.size() + janeClose.size() != totalCard && 
            johnClose.size() + johnOpen.size() != totalCard) &&
            round < 1000
        ) {
            char janeCard = janeClose[0];
            char johnCard = johnClose[0];
            janeClose.pop_front();
            johnClose.pop_front();
            janeOpen.push_front(janeCard);
            johnOpen.push_front(johnCard);

            // cout << janeCard << endl;
            // cout << johnCard << endl;

            if (janeCard == johnCard) {

                bool isJohn = random() / 141 % 2;
                // cout << isJohn << endl;
                if (isJohn) {
                    cout << "Snap! for John: ";
                    while (janeOpen.size() > 0) {
                        char card = janeOpen[janeOpen.size() - 1];
                        johnOpen.push_front(card);
                        janeOpen.pop_back();
                    }

                    for (int i = 0 ; i < johnOpen.size(); i++) {
                        cout << johnOpen[i];
                    }
                    cout << endl;
                } else {
                    cout << "Snap! for Jane: ";
                    while (johnOpen.size() > 0) {
                        char card = johnOpen[johnOpen.size() - 1];
                        janeOpen.push_front(card);
                        johnOpen.pop_back();
                    }

                    for (int i = 0 ; i < janeOpen.size(); i++) {
                        cout << janeOpen[i];
                    }
                    cout << endl;
                }

            }

            if (janeClose.size() == 0) {

                while (janeOpen.size() > 0) {
                    char card = janeOpen[0];
                    janeOpen.pop_front();
                    janeClose.push_front(card);
                }
 
                // janeClose.insert(janeClose.end(), janeOpen.begin(), janeOpen.end());
                // janeOpen.clear();
            }

            if (johnClose.size() == 0) {
                while (johnOpen.size() > 0) {
                    char card = johnOpen[0];
                    johnOpen.pop_front();
                    johnClose.push_front(card);
                }
            }
            round++;
        }

        if (round == 1000) {
            cout << "Keeps going and going ..." << endl;
        } else {
            bool johnWin = johnClose.size() + johnOpen.size() == totalCard;
            cout << (johnWin ? "John wins." : "Jane wins.") << endl;
        }

        if (t > 0) {
            cout << endl;
        }
    }
}