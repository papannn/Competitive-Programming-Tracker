#include <iostream>
#include <math.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    int count = 1;
    while (t--) {
        int n;
        cin >> n;
        int mile = 0;
        int juice = 0;
        while (n--) {
            double sec;
            cin >> sec;

            double secMile = sec;
            double secJuice = sec;

            secMile -= 29;
            secJuice -= 59;
            mile += 10;
            juice += 15;
            
            if (secMile > 0)
                mile += ceil(secMile / 30) * 10;
            if (secJuice > 0)
                juice += ceil(secJuice / 60) * 15;
        }
        
        cout << "Case " << count++ << ": ";
        if (mile < juice) {
            cout << "Mile " << mile << endl;
        } else if (mile > juice) {
            cout << "Juice " << juice << endl;
        } else {
            cout << "Mile Juice " << mile << endl;
        }
    }
}