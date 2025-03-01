#include <iostream>
#include <math.h>

using namespace std;
int main () {
    int t;
    int count = 1;
    while (cin >> t) {
        long long minVal = 1e7;
        long long maxVal = -1e7;
        long long n;
        while (t--) {
            cin >> n;
            maxVal = max(maxVal, n);
            minVal = min(minVal, n);
        }
        cout << "Case " << count << ": ";
        cout << minVal << " " << maxVal << " " << maxVal - minVal << endl;
        count++;
    }
}