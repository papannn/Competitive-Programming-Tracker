#include <iostream>

using namespace std;
int main () {
    string s;
    cin >> s;
    bool hiss = false;
    for (int i = 0 ; i < s.length() - 1; i++) {
        if (s[i] == 's' && s[i + 1] == 's') {
            hiss = true;
            break;
        }
    }
    cout << (hiss ? "hiss" : "no hiss") << endl;
}