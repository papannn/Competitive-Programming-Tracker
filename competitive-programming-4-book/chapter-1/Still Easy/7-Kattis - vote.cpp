#include <iostream>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int maxVal = 0;
        int count = 0;
        int tot = 0;
        int who = -1;
        int idx = 0;
        while (n--) {
            int vote;
            cin >> vote;
            tot += vote;
            idx++;
            if (vote > maxVal) {
                maxVal = vote;
                count = 1;
                who = idx;
            } else if (vote == maxVal) {
                count++;
            }
        }

        if (count > 1) {
            cout << "no winner" << endl;
        } else if (maxVal > tot / 2) {
            cout << "majority winner " << who << endl; 
        } else if (maxVal <= tot / 2) {
            cout << "minority winner " << who << endl; 
        }
    }
}