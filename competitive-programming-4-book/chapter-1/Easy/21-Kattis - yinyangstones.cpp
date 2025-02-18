#include <iostream>
#include <vector>

using namespace std;
int main () {
    string s;
    cin >> s;
    vector<char> arrTemp;
    for (int i = 0 ; i < s.length(); i++) {
        arrTemp.push_back(s[i]);
        if (arrTemp.size() >= 3) {
            int b = 0;
            b += arrTemp[arrTemp.size() - 1] == 'B';
            b += arrTemp[arrTemp.size() - 2] == 'B';
            b += arrTemp[arrTemp.size() - 3] == 'B';
            if (b == 2) {
                arrTemp.pop_back();
                arrTemp.pop_back();
                arrTemp.pop_back();
                arrTemp.push_back('B');
            } else if (b == 1) {
                arrTemp.pop_back();
                arrTemp.pop_back();
                arrTemp.pop_back();
                arrTemp.push_back('W');
            }
        }
    }

    if (arrTemp.size() == 2) {
        int b = 0;
        b += arrTemp[0] == 'B';
        b += arrTemp[1] == 'B';
        cout << (b == 1 ? 1 : 0) << endl;
    } else {
        cout << 0 << endl;
    }
}