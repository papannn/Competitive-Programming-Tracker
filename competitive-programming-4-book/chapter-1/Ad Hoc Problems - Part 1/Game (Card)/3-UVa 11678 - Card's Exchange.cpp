#include <bits/stdc++.h>

using namespace std;
int main () {
    int a, b;
    while (cin >> a >> b) {
        if (a == 0 && b == 0) {
            break;
        }

        unordered_set<int> collectionA;
        unordered_set<int> collectionB;

        while (a--) {
            int num;
            cin >> num;
            collectionA.insert(num);
        }

        while (b--) {
            int num;
            cin >> num;
            collectionB.insert(num);
        }

        int canGiveA = 0;
        for (int n : collectionA) {
            if (collectionB.find(n) == collectionB.end()) {
                canGiveA++;
            }
        }

        int canGiveB = 0;
        for (int n : collectionB) {
            if (collectionA.find(n) == collectionA.end()) {
                canGiveB++;
            }
        }

        cout << min(canGiveA, canGiveB) << endl;
    }
}