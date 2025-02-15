#include <iostream>
#include <vector>
#include <math.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    vector<int> arr;
    while (t--) {
        int n;
        cin >> n;
        arr.push_back(n);
    }
    int mostHot = 1e7;
    int day = -1;
    for (int i = 0 ; i < arr.size() - 2; i++) {
        int maxHot = max(arr[i], arr[i + 2]);
        if (mostHot > maxHot) {
            day = i + 1;
            mostHot = maxHot;
        }
    }

    cout << day << " " << mostHot << endl;
}