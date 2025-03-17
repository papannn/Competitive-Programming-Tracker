#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<long long> arr;
        while (n--) {
            long long num;
            cin >> num;
            arr.push_back(num);
        }

        if (k == 1) {
            long long maxVal = arr[0] + arr[arr.size() - 1];
            for (int i = 1; i < arr.size() - 1; i++) {
                maxVal = max(maxVal, arr[i] + arr[0]);
                maxVal = max(maxVal, arr[i] + arr[arr.size() - 1]);
            }
            cout << maxVal << endl;
        } else {
            int left = 0;
            int right = arr.size() - 1;
            // int maxVal
            int maxVal = 0;
            int maxLeft = -1;
            int maxRight = -1;
            while (left + 1 < right) {
                // cout << arr[left] << " " << arr[right] << " " << *max_element(arr.begin() + left + 1, arr.begin() + right) << endl;
                long long val = arr[left] + arr[right] + *max_element(arr.begin() + left + 1, arr.begin() + right);
                // maxVal = max(maxVal, val);
                if (val > maxVal) {
                    maxLeft = left;
                    maxRight = right;
                    maxVal = val;
                }
                right--;
            }
            
            left = 0;
            right = arr.size() - 1;
            while (left + 1 < right) {
                // cout << arr[left] << " " << arr[right] << " " << *max_element(arr.begin() + left + 1, arr.begin() + right)<< endl;
                long long val = arr[left] + arr[right] + *max_element(arr.begin() + left + 1, arr.begin() + right);
                if (val > maxVal) {
                    maxLeft = left;
                    maxRight = right;
                    maxVal = val;
                }
                left++;
            }

            map<long long, long long> mapping;
            for (int i = 0 ; i < arr.size(); i++) {
                mapping[arr[i]]++;
            }

            mapping[arr[maxLeft]]--;
            if (mapping[arr[maxLeft]] == 0) {
                mapping.erase(arr[maxLeft]);
            }
            mapping[arr[maxRight]]--;
            if (mapping[arr[maxRight]] == 0) {
                mapping.erase(arr[maxRight]);
            }

            k -= 2;
            while (k > 0) {
                for (auto it = mapping.rbegin(); it != mapping.rend(); ++it) {
                    if (it->second >= k) {
                        maxVal += it->first * k;
                        k = 0;
                    } else {
                        maxVal += it->first * it->second;
                        k -= it->second;
                    }
                }
            }
            
            cout << maxVal << endl;
        }
    }
}