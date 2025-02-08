#include <iostream>

using namespace std;
int main(){
    int t;
    cin >> t;
    int count = 1;
    while (t--) {
        int n;
        cin >> n;
        int maxVal = -1;
        while (n--) {
            int speed;
            cin >> speed;
            maxVal = max(maxVal, speed);
        }
        cout << "Case " << count <<  ": " << maxVal << endl;
        count++;
    }
}