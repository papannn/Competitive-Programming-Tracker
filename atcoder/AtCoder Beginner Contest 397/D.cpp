#include <bits/stdc++.h>

using namespace std;

long long cube(long long n) {
    return n * n * n;
}

int main () {
    long long n;
    cin >> n;

    long long x = 1e6;
    long long y = 1;

    // while (true) {
    while (cube (x) - cube(y) > n){
        cout << cube (x) << endl;
        cout << cube (y) << endl;
        cout << cube (x) - cube (y) << endl;
        while (cube(x) - cube(y) > n) {
            x /= 2;
        }
        x *= 2;

        while (cube (x) - cube(y) > n) {
            y *= 2;
        }
        y /= 2;
    }
        

        // if (isDiv) {
        //     x *= 2;
        // } else {
        //     y /= 2;
        // }
    // }
    
    cout << cube (x) << endl;
    cout << cube (y) << endl;
    cout << cube (x) - cube (y) << endl;
}