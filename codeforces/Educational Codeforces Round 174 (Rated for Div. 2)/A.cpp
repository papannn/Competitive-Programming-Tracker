#include <iostream>
#include <vector>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        n -= 2;
        vector<int> arr(n);
        while (n--) {
            int num;
            cin >> num;
            arr.push_back(num);
        }

        if (arr.size() < 3) {
            cout << "YES" << endl;
            continue;
        }
        
        bool valid = true;
        for (int i = 0 ; i < arr.size() - 2; i++) {
            if (arr[i] == 1 && arr[i + 1] == 0 && arr[i + 2] == 1) {
                valid = false;
                break;
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}