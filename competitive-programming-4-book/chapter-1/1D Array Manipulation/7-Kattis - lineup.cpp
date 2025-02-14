#include <iostream>
#include <vector>

using namespace std;
int main () {
    int t;
    cin >> t;
    vector<string> arr(t);
    for (int i = 0 ; i < t; i++) {
        cin >> arr[i];
    }

    bool increase = arr[0].compare(arr[1]) < 0;
    string prev = arr[1];
    for (int i = 2; i < t; i++) {
        if (increase) {
            if (prev.compare(arr[i]) > 0) {
                cout << "NEITHER" << endl;
                return 0;
            }
        } else {
            if (prev.compare(arr[i]) < 0) {
                cout << "NEITHER" << endl;
                return 0;
            }
        }
        prev = arr[i];
    }

    cout << (increase ? "INCREASING" : "DECREASING") << endl;
}