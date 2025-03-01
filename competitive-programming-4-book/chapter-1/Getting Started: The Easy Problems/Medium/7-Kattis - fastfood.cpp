#include <iostream>
#include <vector>
#include <string.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int sizeM = m;
        vector<vector<int>> prize;
        vector<int> cashArr;
        int stickerArr[m + 1];
        memset(stickerArr, 0, sizeof(stickerArr));
        while (n--) {
            int amountSticker;
            cin >> amountSticker;
            vector<int> prizeSticker(m + 1);
            while (amountSticker--) {
                int prize;
                cin >> prize;
                prizeSticker[prize]++;
            }
            prize.push_back(prizeSticker);
            int cash;
            cin >> cash;
            cashArr.push_back(cash);
        } 

        int idx = 1;
        while (m--) {
            int sticker;
            cin >> sticker;
            stickerArr[idx++] = sticker;
        }

        int res = 0;
        for (int i = 0 ; i < prize.size(); i++) {
            int minVal = 1e7;
            for (int j = 0 ; j < prize[i].size(); j++) {
                if (prize[i][j] == 0) {
                    continue;
                }
                
                minVal = min(minVal, stickerArr[j] / prize[i][j]);
            }
            res += cashArr[i] * minVal;
        }

        cout << res << endl;
    }
}