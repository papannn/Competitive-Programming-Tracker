#include <iostream>
#include <vector>
#include <string.h>

using namespace std;
int main () {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int height, length;
    while (cin >> height >> length) {
        if (height == 0 || length == 0) {
            break;
        }

        vector<int> arr(length);
        for (int i = 0 ; i < length; i++) {
            cin >> arr[i];
        }

        int prevDrill = height - arr[0];
        int res = height - arr[0];
        for (int i = 1 ; i < arr.size(); i++) {
            int currDrill = height - arr[i];
            if (prevDrill < currDrill) {
                res += abs(prevDrill - currDrill);
            }
            prevDrill = currDrill;
        }

        cout << res << endl;
    }
}