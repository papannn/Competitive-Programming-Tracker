#include <iostream>
#include <string.h>
#include <vector>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        char c = str.at(0);
        bool flag = false;
        for (int i = 1 ; i < str.length(); i++) {
            if (str.at(i) == c) {
                flag = true;
                break;
            }
            c = str.at(i);
        }

        cout << (flag ? 1 : str.length()) << endl;

        // vector<char> arr;
        // int l = strlen(s);  
        // for (int i = 0 ; i < l; i++) {
        //     arr.push_back(s[i]);
        // }

        // // for (int i = 0 ; i < arr.size() ; i++) {
        // //     cout << arr[i] << " ";
        // // }
        // // cout << endl;

        // int ptr = l - 2;
        // while (ptr != -1) {
        //     // for (int i = 0 ; i < arr.size() ; i++) {
        //     //     cout << arr[i] << " ";
        //     // }
        //     // cout << endl;
        //     while (ptr != arr.size() - 1 && arr.at(ptr) == arr.at(ptr + 1)) {
        //         arr.erase(arr.begin() + ptr + 1);
        //         if (ptr != 0) {
        //             arr[ptr] = arr[ptr - 1];
        //         }
        //     }
        //     ptr--;
        // }

        // cout << arr.size() << endl;
    }
}