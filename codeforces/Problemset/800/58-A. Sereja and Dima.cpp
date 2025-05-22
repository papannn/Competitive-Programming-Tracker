#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/381/A
// O(n)
int main () {
    int n;
    cin >> n;
    deque<int> deq;
    while (n--) {
        int num;
        cin >> num;
        deq.push_back(num);
    }

    bool isDima = false;
    int score[] = {0, 0};
    while (!deq.empty()) {
        if (deq[deq.size() - 1] > deq[0]) {
            score[isDima] += deq[deq.size() - 1];
            deq.pop_back();
        } else {
            score[isDima] += deq[0];
            deq.pop_front();
        }
        isDima = !isDima;
    }
    cout << score[0] << " " << score[1] << endl;
}