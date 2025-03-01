#include <iostream>
#include <string>

using namespace std;
int main() {
    string input;
    int t = 1;
    getline(cin, input);
    while (input.compare("#") != 0) {
        cout << "Case " << t << ": ";
        if (input.compare("HELLO") == 0) {
            cout << "ENGLISH" << endl;
        } else if (input.compare("HOLA") == 0) {
            cout << "SPANISH" << endl;
        } else if (input.compare("HALLO") == 0) {
            cout << "GERMAN" << endl;
        } else if (input.compare("BONJOUR") == 0) {
            cout << "FRENCH" << endl;
        } else if (input.compare("CIAO") == 0) {
            cout << "ITALIAN" << endl;
        } else if (input.compare("ZDRAVSTVUJTE") == 0) {
            cout << "RUSSIAN" << endl;
        } else {
            cout << "UNKNOWN" << endl;
        }
        getline(cin, input);
        t++;
    }
}