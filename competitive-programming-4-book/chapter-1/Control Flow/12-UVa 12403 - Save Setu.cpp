#include <iostream>

using namespace std;
int main () {
    int t;
    cin >> t;
    long long total = 0;
    while (t--) {
        string command;
        long long money;
        cin >> command;

        if (command.compare("donate") == 0) { 
            cin >> money;
            total += money;
        } else {
            cout << total << endl;
        }
    }   
}