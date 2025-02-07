#include <iostream>

using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    while (a != -1 || b != -1) {
        cout << min((99 - b + a + 1) % 100, (99 - a + b + 1) % 100) << endl;
        cin >> a >> b;
    }
}