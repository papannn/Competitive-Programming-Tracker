#include <iostream>
#include <string>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        string skibidi;
        cin >> skibidi;
        for (int i = 0 ; i < skibidi.length() - 2; i++) {
            cout << skibidi.at(i);
        }
        cout << "i" << endl;

    }
}