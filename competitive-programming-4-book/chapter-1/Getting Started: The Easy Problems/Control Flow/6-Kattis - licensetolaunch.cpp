#include <iostream>

using namespace std;
int main () {
    int t;
    int junk = 1e7;
    int resDay = 0;
    int day = 0;
    cin >> t;
    while (t--) {
        int temp;
        cin >> temp;
        if (temp < junk) {
            junk = temp;
            resDay = day;
        }

        day++;
    }
    cout << resDay << endl;
}