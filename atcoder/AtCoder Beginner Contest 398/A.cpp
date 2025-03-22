#include <bits/stdc++.h>

using namespace std;
int main () {
    int n;

    cin >> n;

    vector<char> arr(n);
    if (n % 2 == 0) {
        int l = 0;
        int r = arr.size() - 1;

        while (r - l > 2) {
            arr[l] = '-';
            arr[r] = '-';
            l++;
            r--;
        }
        arr[l] = '=';
        arr[r] = '=';
    } else {
        int l = 0;
        int r = arr.size() - 1;

        while (r - l > 1) {
            arr[l] = '-';
            arr[r] = '-';
            l++;
            r--;
        }
        arr[l] = '=';
    }
    for (int i = 0 ; i < arr.size(); i++) {
        cout << arr[i];
    }
    cout << endl;
}