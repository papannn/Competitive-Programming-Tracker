#include <iostream>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        n--;
        long long maxVal;
        cin >> maxVal;
        long long res = -1e9;
        while (n--) {
            long long num;
            cin >> num;

            res = max(res, maxVal - num);
            maxVal = max(maxVal, num);
        }
        cout << res << endl;
    }
}