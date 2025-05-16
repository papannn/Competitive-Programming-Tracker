#include <bits/stdc++.h>

using namespace std;
int main () {
    string s1, s2;
    string s3;
    cin >> s1 >> s2 >> s3;
    vector<int> arr(26);
    for (int i = 0 ; i < s1.length(); i++) {
        arr[s1[i] - 'A']++;
    }

    for (int i = 0 ; i < s2.length(); i++) {
        arr[s2[i] - 'A']++;
    }

    for (int i = 0 ; i < s3.length(); i++) {
        arr[s3[i] - 'A']--;
    }

    bool valid = true;
    for (int i = 0 ; i < arr.size(); i++) {
        if (arr[i] != 0) {
            valid = false;
            break;
        }
    }
    cout << (valid ? "YES" : "NO") << endl;
}