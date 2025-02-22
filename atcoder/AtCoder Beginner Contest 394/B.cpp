#include <iostream>
#include <unordered_map>

using namespace std;
int main () {
    int n;
    cin >> n;
    unordered_map<int, string> map;
    while (n--) {
        string s;
        cin >> s;
        map[s.length()] = s;
    }

    for (int i = 1 ; i <= map.size(); i++) {
        cout << map[i];
    }
    cout << endl;
}