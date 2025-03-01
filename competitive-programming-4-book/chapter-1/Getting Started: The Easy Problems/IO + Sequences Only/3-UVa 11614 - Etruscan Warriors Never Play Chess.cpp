#include <iostream>
#include <math.h>

using namespace std;
int main() {

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long res = (-1 + sqrt(1 + 8 * n)) / 2;
        cout << res << endl;
    }
}