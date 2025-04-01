#include <bits/stdc++.h>

using namespace std;
int main () {

    string s;
    cin >> s;
    vector<int> arr = {1, 0, 0};
    for (int i = 0 ; i < s.length(); i++) {
        if (s[i] == 'A') {
            swap(arr[0], arr[1]);
        }

        if (s[i] == 'B') {
            swap(arr[1], arr[2]);
        }

        if (s[i] == 'C') {
            swap(arr[0], arr[2]);
        }
    }

    for (int i = 0 ; i < arr.size(); i++) {
        if (arr[i] == 1) {
            cout << i + 1 << endl;
            break;
        }
    }
}