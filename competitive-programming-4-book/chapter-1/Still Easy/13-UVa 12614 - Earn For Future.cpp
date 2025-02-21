#include <iostream>

using namespace std;
int main () {
    int t;
    cin >> t;
    int count = 1;
    while (t--) {
        int n;
        cin >> n;
        int maxPoint = 0;
        while (n--) {
            int num;
            cin >> num;
            maxPoint = max(maxPoint, num);
        }

        cout << "Case " << count++ << ": " << maxPoint << endl;
    }
}