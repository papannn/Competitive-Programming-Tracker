#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    cin.ignore();
    int count = 1;
    while (t--) {
        string s;
        getline(cin, s);
        int idx = 0;
        vector<int> arr(100);
        for (int i = 0 ; i < s.length(); i++) {
            char c = s[i];
            if (c == '>') {
                idx++;
                if (idx == 100) {
                    idx = 0;
                }
            } else if (c == '<') {
                idx--;
                if (idx == -1) {
                    idx = 99;
                }
            } else if (c == '+') {
                arr[idx]++;
                if (arr[idx] == 256) {
                    arr[idx] = 0;
                }
            } else if (c == '-') {
                arr[idx]--;
                if (arr[idx] == -1) {
                    arr[idx] = 255;
                }
            } else if (c == '.') {

            }
        }

        cout << "Case " << count++ << ": ";
        for (int i = 0 ; i < arr.size(); i++) {
            stringstream stream;
            stream << setfill('0') << setw(sizeof(char) * 2) << hex << arr[i];
            // printf("%X ", arr[i]);
            string str = stream.str();
            for (int i = 0 ; i < str.length(); i++) {
                str[i] = toupper(str[i]);
            }
            cout << str;
            if (i < arr.size() - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
}