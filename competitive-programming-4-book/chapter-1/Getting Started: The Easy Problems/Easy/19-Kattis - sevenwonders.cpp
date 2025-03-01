#include <iostream>
#include <unordered_map>
#include <math.h>

using namespace std;
int main () {
    string s;

    unordered_map<char, int> map;
    map['T'] = 0;
    map['C'] = 0;
    map['G'] = 0;

    cin >> s;
    for (int i = 0 ; i < s.length(); i++) {
        map[s[i]]++;
    }

    int minVal = min(map['T'], map['C']);
    minVal = min(minVal, map['G']);
    int res = map['T'] * map['T'] + map['G'] * map['G'] + map['C'] * map['C'] + 7 * minVal;
    cout << res << endl;
}