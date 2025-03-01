#include <iostream>

using namespace std;
int main () {
    int t;
    cin >> t;
    int count = 1;
    while (t--) {
        int ladder;
        cin >> ladder;
        ladder--;
        int pos;
        cin >> pos;
        int high = 0, low = 0;
        while (ladder--) {
            int temp;
            cin >> temp;
            if (pos > temp) {
                low++;
            } else if (pos < temp) {
                high++;
            }
            pos = temp;
        }
        cout << "Case " << count << ": " << high << " " << low << endl;
        count++;
    }
}