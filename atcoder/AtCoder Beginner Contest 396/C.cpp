#include <bits/stdc++.h>

using namespace std;
int main () {
    long long b, w;
    cin >> b >> w;
    vector<long long> blackArr;
    vector<long long> whiteArr;
    while (b--) {
        long long n;
        cin >> n;
        blackArr.push_back(n);
    }

    while (w--) {
        long long n;
        cin >> n;
        whiteArr.push_back(n);
    }

    sort(whiteArr.begin(), whiteArr.end(), greater<long long>());
    sort(blackArr.begin(), blackArr.end(), greater<long long>());

    // for (int i = 0 ; i < whiteArr.size(); i++) {
    //     cout << whiteArr[i] << " ";
    // }
    // cout << endl;
    long long sum = 0;

    deque<long long> whiteChosen;
    for (long unsigned int i = 0 ; i < whiteArr.size(); i++) {
        if (whiteArr[i] > 0) {
            whiteChosen.push_back(whiteArr[i]);
            sum += whiteArr[i];
        }
        
    }

    int idx = -1;
    int blackChosen = 0;
    for (long unsigned int i = 0 ; i < blackArr.size(); i++) {
        if (blackArr[i] >= 0) {
            blackChosen++;
            sum += blackArr[i];
            idx = i;
        } else {
            break;
        }
    }

    // cout << "IDX: " <<  idx << endl;
    // cout << whiteChosen.size() << endl;
    // cout << blackChosen << endl;
    // cout << (int) whiteChosen.size() - blackChosen << endl;
    for (long unsigned int i = idx + 1; i < blackArr.size();) {
        int size = whiteChosen.size();
        // cout << size << endl;
        if (size - blackChosen <= 0) {
            break;
        }
        // cout << "HOLOK" << endl;
        // cout << "SUM - WhiteChosen: " << sum << "-" <<  whiteChosen[whiteChosen.size() - 1] <<": " << sum - whiteChosen[whiteChosen.size() - 1] << endl;
        // cout << "SUM + Black: " << sum << " + " << blackArr[i] << ": " << sum + blackArr[i] << endl;
        // cout << whiteChosen.size() << endl;
        // cout << blackChosen << endl;
        if (sum - whiteChosen[whiteChosen.size() - 1] < sum + blackArr[i]) {
            sum += blackArr[i];
            blackChosen++;
            i++;
        } else {
            sum -= whiteChosen[whiteChosen.size() - 1];
            whiteChosen.pop_back();
        }
    }
    int size = whiteChosen.size();
    while (size - blackChosen > 0) {
        size = whiteChosen.size();
        if (size - blackChosen <= 0) {
            break;
        }
        sum -= whiteChosen[whiteChosen.size() - 1];
        whiteChosen.pop_back();
    }

    cout << sum << endl;
    // cout << endl;
}