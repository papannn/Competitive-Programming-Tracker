#include <bits/stdc++.h>

using namespace std;
int main () {
    // Init
    long long cow1, cow2, target1, target2, timeLimit1, timeLimit2;
    cin >> cow1 >> cow2;
    cin >> target1 >> target2;
    cin >> timeLimit1 >> timeLimit2;
    long long originalCow1 = cow1;
    long long originalCow2 = cow2;
    long long duration1 = 0;
    long long duration2 = 0;
    bool possible1 = true;
    bool possible2 = true;


    // 
    duration1 += abs(cow1) + abs(max(cow1, target1) - min(cow1, target1));
    // cout << "Duration 1: " << duration1 << endl; 
    possible1 &= duration1 <= timeLimit1;
    long long tempCow2 = cow2;
    if (cow1 >= 0 && (cow2 >= 0 && cow2 <= cow1)) {
        if (target2 <= cow1 && cow2 <= target2) {
            cow2 = target2;
        } else {
            cow2 = cow1;
        }
    } else if (cow1 <= 0 && (cow2 <= 0 && cow2 >= cow1)) {
        if (target2 >= cow1 && cow2 >= target2) {
            cow2 = target2;
        } else {
            cow2 = cow1;
        }
    }

    // if (cow1 >= 0 && (tempCow2 >= 0 && tempCow2 <= target1)) {
    //     cow2 = target1;
    // } else if (cow1 <= 0 && (tempCow2 <= 0 && tempCow2 >= target1)) {
    //     cow2 = target1;
    // }
    duration1 += abs(max(target1, cow2) - min(target1, cow2)) + abs(max(cow2, target2) - min(cow2, target2));
    // cout << "Duration 1: " << duration1 << endl; 
    possible1 &= duration1 <= timeLimit2;

    // cout << "Duration 1: " << duration1 << endl; 
    cow2 = originalCow2;
    duration2 += abs(cow2) + abs(max(cow2, target2) - min(cow2, target2));
    // cout << "Duration 2: " << duration2 << endl;
    possible2 &= duration2 <= timeLimit2;
    long long tempCow1 = cow1;
    if (cow2 >= 0 && (cow1 >= 0 && cow1 <= cow2)) {
        if (target1 <= cow2 && cow1 <= target1) {
            cow1 = target1;
        } else {
            cow1 = cow2;
        }
    } else if (cow2 <= 0 && (cow1 <= 0 && cow1 >= cow2)) {
        if (target1 >= cow2 && cow1 >= target1) {
            cow1 = target1;
        } else {
            cow1 = cow2;
        }
        
    }

    // if (cow2 >= 0 && (tempCow1 >= 0 && tempCow1 <= target2)) {
    //     cow1 = target2;
    // } else if (cow2 <= 0 && (tempCow1 <= 0 && tempCow1 >= target2)) {
    //     cow1 = target2;
    // }
    duration2 += abs(max(target2, cow1) - min(target2, cow1)) + abs(max(cow1, target1) - min(cow1, target1));
    // cout << "Duration 2: " << duration2 << endl;
    possible2 &= duration2 <= timeLimit1;

    // cout << "Duration 2: " << duration2 << endl;

    cout << ((possible1 || possible2) ?  "possible" : "impossible") << endl;
}