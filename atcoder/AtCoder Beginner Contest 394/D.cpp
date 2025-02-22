#include <iostream>
#include <vector>

using namespace std;
int main () {

    vector<char> stk;
    string s;
    cin >> s;

    bool valid = true;
    int l = s.length();
    for (int i = 0 ; i < l; i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '<') {
            stk.push_back(s[i]);
        } else {
            if (stk.size() == 0) {
                valid = false;
                break;
            }
            
            if (s[i] == ')') {
                if (stk[stk.size() - 1] == '(') {
                    stk.pop_back();
                } else {
                    valid = false;
                    break;
                }
            }

            if (s[i] == ']') {
                if (stk[stk.size() - 1] == '[') {
                    stk.pop_back();
                } else {
                    valid = false;
                    break;
                }
            }

            if (s[i] == '>') {
                if (stk[stk.size() - 1] == '<') {
                    stk.pop_back();
                } else {
                    valid = false;
                    break;
                }
            }
        }
    }

    if (stk.size() == 0 && valid) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

}