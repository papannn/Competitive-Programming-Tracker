#include <iostream>
#include <string.h>

using namespace std;
int main () {
    int min;
    char problem;
    string verdict;
    int penalties[26];
    memset(penalties, 0, sizeof(penalties));

    int penaltiesCount = 0;
    int res = 0;
    cin >> min >> problem >> verdict;
    while (min != -1) {
        if (verdict.compare("right") == 0) {
            penaltiesCount += min;
            penaltiesCount += penalties[problem - 'A'];
            res++;
        } else {
            penalties[problem - 'A'] += 20;
        } 
        cin >> min >> problem >> verdict;
    }
    cout << res << " " << penaltiesCount << endl;
}