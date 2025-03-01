#include <iostream>

using namespace std;
int main () {
    long long n;
    cin >> n;
    while (n != 0) {
        long long res;
        while (n > 9) {
            res = 0;
            while (n != 0) {
                res += n % 10;
                n /= 10;
            }
            n = res;
        }
        cout << n << endl;
        cin >> n;
    }
}