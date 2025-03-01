#include <iostream>
#include <vector>

using namespace std;
int main () {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        
        int res = 0;
        vector<int> pos;
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] == '/' && pos.size() > 0) {
                res += i - pos[pos.size() - 1];
                pos.pop_back();
            } else if (s[i] == '\\') {
                pos.push_back(i);
            }
        }
        cout << res << endl;
    }
}