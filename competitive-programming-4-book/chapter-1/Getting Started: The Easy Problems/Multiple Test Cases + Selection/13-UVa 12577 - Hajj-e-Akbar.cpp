#include <iostream>
#include <string>

using namespace std;
int main() {
    string input;
    cin >> input;
    int count = 1;
    while (input.compare("*") != 0) {
        cout << "Case " << count << ": ";
        if (input.compare("Hajj") == 0) {
            cout << "Hajj-e-Akbar";
        } else {
            cout << "Hajj-e-Asghar";
        }
        cout << endl;
        cin >> input;
        count++;
    }
}