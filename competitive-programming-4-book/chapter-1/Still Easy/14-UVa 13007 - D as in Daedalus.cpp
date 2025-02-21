#include <iostream>
#include <vector>

using namespace std;
int main () {
    int player, round;
    vector<int> optList = { 1, 10, 100, 1000, 10000 };
    while (cin >> player >> round) {
        int res = 0;
        while (round--) {
            int budget;
            cin >> budget;
            vector<int> arr(player);
            int tot = 0;
            for (int i = 0 ; i < player; i++) {
                cin >> arr[i];
                tot += arr[i];
            }

            int currScore = 0;
            if (tot <= budget) {
                currScore = arr[0];
            }

            tot -= arr[0];
            int maxScore = 0;
            for (int i = 0 ; i < optList.size(); i++) {
                if (tot + optList[i] <= budget) {
                    maxScore = max(maxScore, optList[i] - currScore);
                }
            }
            res += maxScore;
        }
        cout << res << endl;
    }
}