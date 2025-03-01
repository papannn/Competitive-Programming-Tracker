#include <iostream>
#include <ctype.h>

using namespace std;
int main () {
    string s1;
    while (getline(cin, s1)) {
        int sum1 = 0;
        for (int i = 0 ; i < s1.length(); i++) {
            if (isalpha(s1[i])) {
                sum1 += tolower(s1[i]) - 'a' + 1;
            }
        }

        double tot1 = sum1;
        while (sum1 > 9) {
            tot1 = 0;
            while (sum1 != 0) {
                tot1 += sum1 % 10;
                sum1 /= 10;
            }
            sum1 = tot1;
        }

        string s2;
        getline(cin, s2);
        int sum2 = 0;
        for (int i = 0 ; i < s2.length(); i++) {
            if (isalpha(s2[i])) {
                sum2 += tolower(s2[i]) - 'a' + 1;
            }
        }

        double tot2 = sum2;
        while (sum2 > 9) {
            tot2 = 0;
            while (sum2 != 0) {
                tot2 += sum2 % 10;
                sum2 /= 10;
            }
            sum2 = tot2;
        }

        double maxVal = max(tot1, tot2);
        double minVal = min(tot1, tot2);

        printf("%.2lf %%\n", minVal / maxVal * 100);
    }
}