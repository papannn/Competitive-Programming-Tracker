#include <iostream>
#include <math.h>
#include <vector>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> arr;
        while (n--) {
            int num;
            cin >> num;
            arr.push_back(num);
        }

        cin >> m;
        arr[0] = min(arr[0], m - arr[0]);
        bool sorted = true;
        // cout << arr[0] << " ";
        for (int i  = 1 ; i < arr.size(); i++) {
            int maxVal = max(arr[i], m - arr[i]);
            int minVal = min(arr[i], m - arr[i]);

            if (minVal >= arr[i - 1]) {
                arr[i] = minVal;
            } else if (maxVal >= arr[i - 1]) {
                arr[i] = maxVal;
            } else {
                sorted = false;
            }
            // cout << arr[i] << " ";
        }
        // cout << endl;
        cout << (sorted ? "YES" : "NO") << endl;
    }
}