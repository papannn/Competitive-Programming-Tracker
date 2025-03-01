#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
int main () {
    vector<double> arr1(3);
    vector<double> arr2(3);

    for (int i = 0 ; i < 3; i++) {
        cin >> arr1[i];
    }

    for (int i = 0 ; i < 3; i++) {
        cin >> arr2[i];
    }

    vector<double> div(3);
    double minVal = 1e6;
    int pos = 0;

    for (int i = 0 ; i < 3; i++) {
        div[i] = arr1[i] / arr2[i];
        if (div[i] < minVal) {
            minVal = div[i];
            pos = i;
        }
    }
    
    for (int i = 0 ; i < 3; i++) {
        cout << fixed << setprecision(6) << (div[i] - div[pos]) * arr2[i] << " ";
    }
    cout << endl;
}