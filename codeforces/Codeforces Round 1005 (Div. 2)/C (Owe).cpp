#include <iostream>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr;
        while (n--) {
            int num;
            cin >> num;
            arr.push_back(num);
        }

        int sum = 0;
        vector<int> memo(arr.size());
        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] > 0) {
                memo[i] = arr[i] - sum;
            }
            sum += abs(arr[i]);
        }

        sum = 0;
        for (int i = arr.size() - 1; i >= 0; i--) {
            if (arr[i] < 0) {
                memo[i] = abs(arr[i]) - sum;
            }
            sum += abs(arr[i]);
        }

        for (int i = 0 ; i < memo.size(); i++) {
            cout << memo[i] << " ";
        }
        cout << endl;
    }
}