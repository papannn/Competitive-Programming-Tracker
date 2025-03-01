#include <iostream>
#include <string.h>

using namespace std;
int main () {
    int b, n;
    cin >> b >> n;
    while (b != 0 || n != 0) {
        int bank[b];
        for (int i = 0 ; i < b; i++) {
            cin >> bank[i];
        }

        int debit[b];
        int credit[b];

        memset(debit, 0, sizeof(debit));
        memset(credit, 0, sizeof(credit));

        for (int i = 0 ; i < n; i++) {
            int debitor, creditor, val;
            cin >> debitor >> creditor >> val;
            debit[debitor - 1] += val;
            credit[creditor - 1] += val;
        }

        bool possible = true;
        for (int i = 0 ; i < b; i++) {
            if (debit[i] > bank[i] + credit[i]) {
                possible = false;
                break;
            }
        }

        cout << (possible ? "S" : "N") << endl;
        cin >> b >> n;
    }
}