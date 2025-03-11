#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        double sum = 0;
        int n, x;
        cin >> n >> x;
        vector<int> arr;
        while (n--) {
            int num;
            cin >> num;
            arr.push_back(num);
            sum += num;
        }
        
        cout << (sum / arr.size() == x ? "YES" : "NO") << endl;
    }
}