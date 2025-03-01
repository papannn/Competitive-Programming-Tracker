#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
int main () {
    int durationLoan, depreciationRecord;
    long double downpayment, amountLoan;

    while (cin >> durationLoan >> downpayment >> amountLoan >> depreciationRecord) {
        if (durationLoan <= 0) {
            break;
        }
        long double owe = amountLoan;
        long double bill = amountLoan / durationLoan;
        long double carValue = amountLoan + downpayment;

        vector<int> arrMonth;
        vector<long double> arrDepreciation;
        while (depreciationRecord--) {
            int month;
            long double depreciation;
            cin >> month >> depreciation;
            arrMonth.push_back(month);
            arrDepreciation.push_back(depreciation);
        }

        arrMonth.push_back(1e7);
        arrDepreciation.push_back(-1);

        int month = -1;
        int ptrMonth = 0;
        while(1 + durationLoan--) {
            month++;
            if (month == arrMonth[ptrMonth + 1]) {
                ptrMonth++;
            }

            carValue -= carValue * arrDepreciation[ptrMonth];
            if (month != 0)
            owe -=  bill;
            if (owe <= carValue) {
                break;
            }
        }


        cout << month << " " << (month == 1 ? "month" : "months" ) << endl;
    }
}