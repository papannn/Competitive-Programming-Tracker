#include <iostream>
#include <vector>
#include <string.h>

using namespace std;
int main () {
    int n;
    string s;
    cin >> n >> s;
    vector<int> posArr;
    // for (int i = 0 ; i < s.length(); i++) {
    //     if (s[i] == '1') {
    //         posArr.push_back(i);
    //     }
    // }
    int mid = -1;
    int minGap = 1e7;

    
    int arr1[s.length()];
    int arr2[s.length()];
    
    memset(arr1, 0, sizeof(arr1));
    memset(arr2, 0, sizeof(arr2));

    int count = 0;
    // cout << "AAAA1" << endl;
    for (int i = 0 ; i < s.length(); i++) {
        if (s[i] == '1') {
            arr1[i] = count;
            count++;
        }
    }

    count = 0;
    // cout << "AAAA" << endl;
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == '1') {
            arr2[i] = count;
            count++;
        }
    }

    for (int i = 0 ; i < s.length() ; i++) {
        if (s[i] == '1') {
            if (abs(arr1[i] - arr2[i]) < minGap) {
            mid = i;
            minGap = abs(arr1[i] - arr2[i]);
        }
        }
        
    }

    // for (int i = 0 ; i < s.length(); i++) {
    //     if (s[i] != '1') {
    //         continue;
    //     }
    //     int left1 = i - 1;
    //     int leftCounter = 0;
    //     while (left1 >= 0) {
    //         if (s[left1] == '1') {
    //             leftCounter++;
    //         }
    //         left1--;
    //     }

    //     int right1 = i + 1;
    //     int rightCounter = 0;
    //     while (right1 < s.length()) {
    //         if (s[right1] == '1') {
    //             rightCounter++;
    //         }
    //         right1++;
    //     }
        
        // if (abs(rightCounter - leftCounter) < minGap) {
        //     mid = i;
        //     minGap = abs(rightCounter - leftCounter);
        // }
    // }
    // cout << mid << endl;
    // int mid = posArr[posArr.size() / 2];
    int left = mid;
    int right = mid;
    int leftPtr = 1;
    int rightPtr = 1;
    
    int res = 0;
    while (mid - leftPtr >= 0) {
        int pos = mid - leftPtr;
        if (s[pos] == '1') {
            int distance = abs(pos - left) - 1;
            if (distance == 0) {
                left--;
            } else {
                res += distance;
                left--;
            }
        }
        leftPtr++;
    }

    while (mid + rightPtr < s.length()) {
        int pos = mid + rightPtr;
        if (s[pos] == '1') {
            int distance = abs(pos - right) - 1;
            if (distance == 0) {
                right++;
            } else {
                res += distance;
                right++;
            }
        }
        rightPtr++;
    }

    // for (int i = 0 ; i < s.length() ; i++) {
    //     if (i >= left && i <= right) {
    //         cout << "1";
    //     } else {
    //         cout << "0";
    //     }
    // }
    // cout << endl;

    cout << res << endl;
}