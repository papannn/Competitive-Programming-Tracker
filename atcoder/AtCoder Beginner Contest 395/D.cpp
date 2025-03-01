#include <bits/stdc++.h>

using namespace std;
int main () {
    int n, q;
    cin >> n >> q;

    unordered_map<int, int> bird;
    unordered_map<int, unordered_set<int>> nest;
    for (int i = 1; i <= n; i++) {
        bird[i] = i;
        nest[i].insert(i);
    }

    while (q--) {
        int command;
        cin >> command;

        if (command == 1) {
            int a, b;
            cin >> a >> b; // Move bird A to nest B
            
            int originNest = bird[a];
            bird[a] = b;
            nest[originNest].erase(a);
            nest[b].insert(a);
        }

        if (command == 2) {
            vector<int> birdArrTempA;
            int a, b; // Move nest A to B, B to A;
            cin >> a >> b;

            for (int birdNestA : nest[a]) {
                bird[birdNestA] = b;
            }

            for (int birdNestB : nest[b]) {
                bird[birdNestB] = a;
            }
            swap(nest[a], nest[b]);
        } 

        if (command == 3) {
            int a;
            cin >> a;
            cout << bird[a] << endl;
        }
    }
}