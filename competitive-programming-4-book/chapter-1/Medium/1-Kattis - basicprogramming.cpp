#include <iostream>
#include <vector>
#include <string.h>

using namespace std;
int main () {
    int n, t;
    cin >> n >> t;
    vector<int> arr;
    while (n--) {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    long long sum = 0;
    switch (t) {
        
        case 1:
            cout << 7 << endl;
            break;
        case 2:

            if (arr[0] > arr[1]) {
                cout << "Bigger" << endl;
            } else if (arr[0] < arr[1]) {
                cout << "Smaller" << endl;
            } else {
                cout << "Equal" << endl;
            }

            break;
        case 3:
            cout << max(max(min(arr[0], arr[1]), min(arr[1], arr[2])), min(arr[0], arr[2])) << endl;
            break;
        case 4:
            for (int i = 0 ; i < arr.size(); i++) {
                sum += arr[i];
            }
            cout << sum << endl;
            break;
        case 5:
            for (int i =0 ; i < arr.size(); i++) {
                if (arr[i] % 2 == 0) {
                    sum += arr[i];
                }
            }
            cout << sum << endl;
            break;
        case 6:
            for (int i = 0 ; i < arr.size(); i++) {
                char c = (arr[i] % 26) + 'a';
                cout << c;
            }
            cout << endl;
            break;
        case 7:
            bool visited[arr.size()];
            memset(visited, false, sizeof(visited));
            int idx = 0;
            while (true) {
                if (idx >= arr.size()) {
                    cout << "Out" << endl;
                    break;
                }

                if (visited[idx]) {
                    cout << "Cyclic" << endl;
                    break;
                }

                visited[idx] = true;
                if (idx == arr.size() - 1) {
                    cout << "Done" << endl;
                    break;
                }
                idx = arr[idx];
            }
            break;
    }
}