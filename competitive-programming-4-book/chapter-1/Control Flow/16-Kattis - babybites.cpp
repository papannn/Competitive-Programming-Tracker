#include <iostream>
#include <string>

using namespace std;
int main () {
    int t;
    cin >> t;
    int count = 1;
    while (t--) {
        string s;
        cin >> s;
        if (s.compare("mumble") != 0) {
            int n = stoi(s);
            if (n != count) {
                cout << "something is fishy" << endl;
                return 0;
            }
        }
        count++;
    }
    cout << "makes sense" << endl;
}