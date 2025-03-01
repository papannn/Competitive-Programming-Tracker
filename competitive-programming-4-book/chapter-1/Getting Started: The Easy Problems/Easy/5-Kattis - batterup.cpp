#include <iostream>

using namespace std;
int main () {
    int t;
    cin >> t;
    int div = 0;
    double sum = 0;
    while (t--) {
        double n;
        cin >> n;
        if (n != -1) {
            div++;
            sum += n;
        }
    }

    cout << sum / div << endl;
}