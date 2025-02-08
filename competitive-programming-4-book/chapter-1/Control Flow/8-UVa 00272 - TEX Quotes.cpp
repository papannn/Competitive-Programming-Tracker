#include <iostream>

using namespace std;
int main () {
    char c;
    bool open = true;
    while (scanf("%c", &c) != EOF) {
        if (c == '"' && open) {
            cout << "``";
            open = !open;
        } else if (c == '"' && !open) {
            cout << "''";
            open = !open;
        } else if (c == '\'' && open) {
            cout << '`';
            open = !open;
        } else if (c == '\'' && !open) {
            cout << "'";
            open = !open;
        } else {
            cout << c;
        }
    }
}