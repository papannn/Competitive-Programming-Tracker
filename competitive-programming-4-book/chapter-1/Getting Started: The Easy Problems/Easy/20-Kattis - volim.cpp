#include <iostream>

using namespace std;
int main () {
    int pos;
    int n;
    cin >> pos;
    cin >> n;
    
    int time = 60 * 3 + 30;
    while (n--) {
        int passed;
        char state;
        cin >> passed >> state;
        time -= passed;
        if (time <= 0) {
            break;
        }
        if (state == 'T') {
            pos++;
            if (pos == 9) {
                pos = 1;
            }
        }
    }

    cout << pos << endl;
}