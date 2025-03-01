#include <iostream>
#include <math.h>

using namespace std;
int main () {
    double n, p1, p2;
    while (cin >> n >> p1 >> p2) {
        double section1 = ceil(p1 / 2);
        double section2 = ceil(p2 / 2);
        int count = 1;

        while (section1 != section2) {
            section1 = ceil(section1 / 2);
            section2 = ceil(section2 / 2);
            count++;
        }
        cout << count << endl;
    }
}