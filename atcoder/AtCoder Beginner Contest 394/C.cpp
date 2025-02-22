#include <iostream>
#include <vector>

using namespace std;
int main () {
    char c;
    vector<char> arr;

    while (cin >> c) {
        arr.push_back(c);
    }
    
    int ptr = 0;
    int ptrStk = 0;
    vector<char> tempArr;
    while (ptr < arr.size()) {
        tempArr.push_back(arr[ptr++]);
        if (tempArr.size() >= 2) {
            int cCount = 0;
            while (tempArr[tempArr.size() - 2] == 'W' && tempArr[tempArr.size() - 1] == 'A') {
                tempArr.pop_back();
                tempArr.pop_back();
                tempArr.push_back('A');
                cCount++;
            }

            while (cCount--) {
                tempArr.push_back('C');
            }
        }
    }

    for (int i = 0 ; i < tempArr.size(); i++) {
        cout << tempArr[i];
    }
    cout << endl;
}