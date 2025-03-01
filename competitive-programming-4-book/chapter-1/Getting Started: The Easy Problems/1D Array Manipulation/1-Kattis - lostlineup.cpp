#include <iostream>
#include <vector>

using namespace std;
int main () {
    int num;
    cin >> num;
    vector<int> arr(num);
    arr[0] = 1;
    for (int i = 1 ; i <= num - 1; i++) {
        int n;
        cin >> n;
        arr[n + 1] = i + 1;
    }

    for (int i = 0 ;i  < num; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}