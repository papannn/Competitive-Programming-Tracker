#include <iostream>
#include <vector>

using namespace std;
int main () {
    vector<int> arr(3);
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr.begin(), arr.end());
    int minGap = 1e7;
    int maxGap = -1e7;
    int startingPoint = -1;
    for (int i = 0 ; i < 2; i++) {
        if (arr[i + 1] - arr[i] > maxGap) {
            startingPoint = arr[i];
            maxGap = arr[i + 1] - arr[i];
        }

        if (arr[i + 1] - arr[i] < minGap) {
            minGap = arr[i + 1] - arr[i];
        }
    }

    if (minGap == maxGap) {
        cout << arr[2] + minGap << endl;
    } else {
        cout << minGap + startingPoint << endl;
    }
}