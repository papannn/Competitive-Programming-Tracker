#include <iostream>
#include <string>

using namespace std;
int main () {
    string num;
    cin >> num;
    while (num.compare("END") != 0) {
        string prev = num;
        string n = to_string(num.length());
        int counter = 1;

        while (n.compare(prev) != 0) {
            prev = n;
            n = to_string(n.length());
            counter++;
        }
        cout << counter << endl;
        cin >> num;
    }
}