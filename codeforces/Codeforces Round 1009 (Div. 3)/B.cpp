#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        deque<int> arr;
        for (int i = 0 ; i < n; i++) {
            int num;
            cin >> num;
            arr.push_back(num);
        }

        while (arr.size() > 1) {
            int a = arr[0];
            int b = arr[1];
            int c = a + b - 1;
            arr.pop_front();
            arr.pop_front();
            arr.push_back(c);
        }
        cout << arr[0] << endl;
    }
}