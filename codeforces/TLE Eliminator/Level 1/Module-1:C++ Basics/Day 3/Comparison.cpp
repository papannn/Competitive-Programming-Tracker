#include <bits/stdc++.h>

using namespace std;
int main () {
    int a, b;
    char comparison;
    cin >> a >> comparison >> b;
    bool res = false;
    if (comparison == '=') {
        res = a == b;
    } else if (comparison == '<') {
        res = a < b;
    } else {
        res = a > b;
    }

    cout << (res ? "Right" : "Wrong") << endl;
}