#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        deque<int> dArr;
        bool back = true;
        while (n) {
            if (back) {
                dArr.push_back(n--);
            } else {
                dArr.push_front(n--);
            }
            back = !back;
        }
        
        for (int i = 0 ; i < dArr.size(); i++) {
            cout << dArr[i] << " ";
        }
        cout << endl;
    }
}