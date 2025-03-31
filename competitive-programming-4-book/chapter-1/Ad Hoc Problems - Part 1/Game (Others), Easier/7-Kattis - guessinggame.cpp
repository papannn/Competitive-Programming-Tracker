#include <bits/stdc++.h>

using namespace std;
int main () {
    vector<int> guess (11);

    while (true) {
        int num;
        string status;
        cin >> num;

        if (num == 0) {
            break;
        }

        cin.ignore();
        getline(cin, status);

        if (status.find("high") != status.npos) {
            for (int i = num; i <= 10; i++) {
                guess[i] = 1;
            }
        } else if (status.find("low") != status.npos) {
            for (int i = num; i >= 1; i--) {
                guess[i] = 1;
            }
        } else {
            if (guess[num] == 1) {
                cout << "Stan is dishonest" << endl;
            } else {
                cout << "Stan may be honest" << endl;
            }

            for (int i = 0; i <= 10; i++) {
                guess[i] = 0;
            }
        }
    }
}