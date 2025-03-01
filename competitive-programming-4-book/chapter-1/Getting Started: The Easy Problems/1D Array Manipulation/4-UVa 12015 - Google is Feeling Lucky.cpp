#include <iostream>
#include <math.h>
#include <vector>

using namespace std;
int main () {
    int t;
    cin >> t;
    int count = 1;
    while (t--) {
        vector<string> web(10);
        vector<int> rank(10);

        int maxRank = -1;
        for (int i = 0 ; i < 10; i++) {
            string currWeb;
            int currRank;
            cin >> web[i] >> rank[i];
            maxRank = max(maxRank, rank[i]);
        }

        cout << "Case #" << count << ":" << endl;
        for (int i = 0 ; i < 10; i++) {
            if (rank[i] == maxRank) {
                cout << web[i] << endl;
            }
        }
        count++;
    }
}