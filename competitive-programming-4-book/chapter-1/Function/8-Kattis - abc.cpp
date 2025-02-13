#include <iostream>
#include <vector>

using namespace std;
int main () {
    vector<int> arr(3);
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr.begin(), arr.end());
    string order;
    cin >> order;

    cout << arr[order[0] - 'A'] << " " << arr[order[1] - 'A'] << " " << arr[order[2] - 'A'] << endl;
}