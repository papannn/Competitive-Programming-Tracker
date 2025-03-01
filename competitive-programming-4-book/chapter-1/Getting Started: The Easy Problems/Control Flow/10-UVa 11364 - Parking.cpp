#include <iostream>
#include <math.h>

using namespace std;
int main (){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int maxVal = -1;
        int minVal = 100;
        while (n--) {
            int pos;
            cin >> pos;
            maxVal = max(maxVal, pos);
            minVal = min(minVal, pos);
        }

        cout << (maxVal - minVal) * 2 << endl;
    }
}