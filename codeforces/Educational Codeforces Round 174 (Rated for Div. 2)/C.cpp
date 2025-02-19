#include <iostream>
#include <vector>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> arrOne(n);
        vector<int> arrThree(n);
        vector<int> leftTwo(n);
        vector<int> rightTwo(n);
        for (int i = 0 ; i < n; i++) {
            cin >> arr[i];
        }
        int one = 0;
        int two = 0;
        for (int i = 0 ; i < n; i++) {
            arrOne[i] = one;
            if (arr[i] == 1) {
                one++;
            }

            if (arr[i] == 2 && arrOne[i] > 0) {
                // two += two;
                two++;
            }
            leftTwo[i] = two;
        }
        
        int three = 0;
        two = 0;
        for (int i = n - 1; i >= 0; i--) {
            arrThree[i] = three;
            if (arr[i] == 3) {
                three++;
            }

            if (arr[i] == 2 && arrThree[i] > 0) {
                // two += two;
                two++;
            }
            rightTwo[i] = two;
        }

        cout << "Arr:" << endl;
        for (int i = 0 ; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        cout << "Arr 1:" << endl;
        for (int i = 0 ; i < n; i++) {
            cout << arrOne[i] << " ";
        }

        cout << endl;

        cout << "Arr Left 2:" << endl;
        for (int i = 0 ; i < n; i++) {
            cout << leftTwo[i] << " ";
        }

        cout << endl;

        cout << "Arr RIght 2:" << endl;
        for (int i = 0 ; i < n; i++) {
            cout << rightTwo[i] << " ";
        }

        cout << endl;

        cout << "Arr 3:" << endl;
        for (int i = 0 ; i < n; i++) {
            cout << arrThree[i] << " ";
        }

        int sum = 0;
        for (int i = 0 ; i < n; i++) {
            if (arr[i] == 2) {
                int two = min(leftTwo[i], rightTwo[i]);
                int one = arrOne[i];
                int three = arrThree[i];
                // cout << two << endl;
                sum += one * three * pow(2, rightTwo[i] - 1);
            }
        }
        
        cout << endl;
        cout << "Result: " << sum << endl;
    }
}