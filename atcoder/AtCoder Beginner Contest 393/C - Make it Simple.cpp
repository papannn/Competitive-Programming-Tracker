#include <iostream>
#include <set>

using namespace std;
int main () {
    int n, m;
    cin >> n >> m;
    
    set<string> s;
    int res = 0;
    while (m--) {
        string s1, s2;
        cin >> s1 >> s2;
        if (s1.compare(s2) == 0) {
            res++;
            continue;
        }

        string key1 = s1 + "_" + s2;
        string key2 = s2 + "_" + s1;
        if (s.find(key1) != s.end() || s.find(key2) != s.end()) {
            res++;
            continue;
        }

        s.insert(key1);
        s.insert(key2);
    }
    cout << res << endl;
}