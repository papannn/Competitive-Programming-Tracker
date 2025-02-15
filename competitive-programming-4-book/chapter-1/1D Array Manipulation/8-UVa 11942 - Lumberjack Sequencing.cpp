#include <iostream>
#include <vector>

using namespace std;
int main () {
    int t;
    cin >> t;
    cout << "Lumberjacks:" << endl;
    while (t--) {
        vector<int> arr(10);
        cin >> arr[0];
        cin >> arr[1];

        bool increasing = arr[0] < arr[1];
        bool ordered = true; 
        for (int i = 2 ; i < 10; i++) {
            cin >> arr[i];
            if (increasing) {
                if (arr[i - 1] > arr[i]) {
                    ordered = false;
                }
            } else {
                if (arr[i - 1] < arr[i]) {
                    ordered = false;
                }
            }
        }

        cout << (ordered ? "Ordered" : "Unordered") << endl;
    }
}