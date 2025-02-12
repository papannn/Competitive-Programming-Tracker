#include <iostream>
#include <math.h>
#include <vector>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<long long> nArr(n);
        vector<long long> mArr(m);

        for (int i = 0 ; i < n; i++) {
            cin >> nArr[i];
        }

        for (int i = 0 ; i < m; i++) {
            cin >> mArr[i];
        }
        
        sort(mArr.begin(), mArr.end());

        long long val = nArr[0];
        for (int i = 0 ; i < m; i++) {
            nArr[0] = min(nArr[0], mArr[i] - val);
        }
        
        bool sorted = true;
        for (int i = 1; i < n; i++) {
            val = nArr[i];
            bool found = false;
            if (nArr[i] >= nArr[i - 1]) {
                found = true;
            }

            long long left = 0;
            long long right = mArr.size() - 1;
            long long mid;
            while (left < right) {
                mid = (left + right) / 2;
                if (mArr[mid] - val < nArr[i - 1]) {
                    left = mid + 1;
                } else {
                    right = mid;
                }
            }

            if (mArr[left] - val >= nArr[i - 1]) {
                if (!found) {
                    nArr[i] = mArr[left] - val;
                } else {
                    nArr[i] = min(mArr[left] - val, nArr[i]);
                }
            }

            if (nArr[i - 1] > nArr[i]) {
                sorted = false;
                break;
            }
        }

        cout << (sorted ? "YES" : "NO") << endl;
        // for (int i = 0 ; i < n; i++) {
        //     cout << nArr[i] << " ";
        // }
        // cout << endl;
    }
}