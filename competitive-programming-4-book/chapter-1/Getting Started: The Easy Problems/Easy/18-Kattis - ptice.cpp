#include <iostream>
#include <vector>
#include <math.h>

using namespace std;
int main () {
    int t;
    cin >> t;

    int ptrAdrian = 0;
    int ptrBruno = 0;
    int ptrGoran = 0;
    vector<char> arrAdrian = { 'A', 'B', 'C' };
    vector<char> arrBruno = { 'B', 'A', 'B', 'C' };
    vector<char> arrGoran = { 'C', 'C', 'A', 'A', 'B', 'B' };

    int scoreAdrian = 0;
    int scoreBruno = 0;
    int scoreGoran = 0;
    string s;
    cin >> s;
    int maxScore = 0;
    for (int i = 0 ; i < t; i++) {

        if (arrAdrian[ptrAdrian++] == s[i]) {
            maxScore = max(maxScore, ++scoreAdrian);
        }

        if (arrBruno[ptrBruno++] == s[i]) {
            maxScore = max(maxScore, ++scoreBruno);
        }

        if (arrGoran[ptrGoran++] == s[i]) {
            maxScore = max(maxScore, ++scoreGoran);
        }

        if (ptrAdrian == arrAdrian.size()) {
            ptrAdrian = 0;
        }

        if (ptrBruno == arrBruno.size()) {
            ptrBruno = 0;
        }

        if (ptrGoran == arrGoran.size()) {
            ptrGoran = 0;
        }
    }

    cout << maxScore << endl;
    if (scoreAdrian == maxScore) {
        cout << "Adrian" << endl;
    }

    if (scoreBruno == maxScore) {
        cout << "Bruno" << endl;
    }

    if (scoreGoran == maxScore) {
        cout << "Goran" << endl;
    }
}