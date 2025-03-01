#include <iostream>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string research;
        cin >> research;

        if (research.compare("1") == 0 || research.compare("4") == 0 || research.compare("78") == 0) {
            cout << "+" << endl;
            continue;
        }

        if (research.length() >= 3 && research.at(research.length() - 2) == '3' && research.at(research.length() - 1) == '5') {
            cout << "-" << endl;
            continue;
        }

        if (research.length() >= 3 && research.at(0) == '9' && research.at(research.length() - 1) == '4') {
            cout << "*" << endl;
            continue;
        }

        if (research.length() >= 4 && (research.at(0) == '1' && research.at(1) == '9' && research.at(2) == '0')) {
            cout << "?" << endl;
            continue;
        }

        cout << "-" << endl;
    }

}