#include <iostream>

using namespace std;
int main () {
    int participant, budget, hotel, weeks;
    while (cin >> participant >> budget >> hotel >> weeks) {
        long long smallestPrice = 1e9;
        while (hotel--) {
            long long price;
            cin >> price;
            int week = weeks;
            while (week--) {
                int avail;
                cin >> avail;
                if (avail >= participant) {
                    smallestPrice = min(smallestPrice, price * participant);
                }
            }
        }

        if (smallestPrice > budget) {
            cout << "stay home" << endl;
        } else {
            cout << smallestPrice << endl;
        }
    }
}