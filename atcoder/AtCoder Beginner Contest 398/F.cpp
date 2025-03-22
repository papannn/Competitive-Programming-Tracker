#include <bits/stdc++.h>

using namespace std;
int main () {
    string s;
    cin >> s;

    bool isPalindrome = true;
    int l = 0;
    int r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) {
            isPalindrome = false;
            break;
        }
        l++;
        r--;
    }

    if (isPalindrome) {
        cout << s << endl;
        return 0;
    }
    
    int i = s.size() - 1;
    for (; i > 0; i--) {
        if (s[i] != s[i - 1]) {
            i--;
            break;
        }
    }

    string temp = s;
    int cnt = 0;
    for (int k = temp.size() - 2; k >= 0; k--) {
        if (temp[k] != temp[k + 1] && temp[k] != temp[k - 1] && temp[k + 1] == temp[k - 1]) {
            int j = k - 2 - cnt;
            for (; j >= 0; j--) {
                temp += temp[j];
            }
            break;
        }
        cnt++;
    }

    isPalindrome = true;
    l = 0;
    r = temp.size() - 1;
    while (l < r) {
        if (temp[l] != temp[r]) {
            isPalindrome = false;
            break;
        }
        l++;
        r--;
    }
    if (isPalindrome) {
        cout << temp << endl;
        return 0;
    }
    
    cout << s;
    for (; i >= 0 ; i--) {
        cout << s[i];
    }
    cout << endl;

}