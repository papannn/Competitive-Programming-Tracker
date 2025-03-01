#include <iostream>
#include <math.h>

using namespace std;
int main() {
    int t;
    cin >> t;
    int count = 1;
    while (t--) {
        int a,b,c;
        cin >> a >> b >> c;
        cout << "Case " << count << ": ";
        cout << min(min(max(a, b), max(b, c)), max(a, c)) << endl;
        count++;
    }
}