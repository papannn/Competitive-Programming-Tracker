#include <iostream>
#include <math.h>
#include <unordered_map>

using namespace std;
int main () {
    unordered_map<char, int> map;
    int maxVal = 0;
    for (int i = 0 ; i < 5; i++) {
        string s;
        cin >> s;
        if (map.find(s[0]) == map.end()) {
            map[s[0]] = 1;
            maxVal = max(maxVal, 1);
        } else {
            maxVal = max(maxVal, ++map[s[0]]);
        }
    }
    cout << maxVal << endl;
}