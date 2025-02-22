#include <iostream>
#include <unordered_set>

using namespace std;
int main () {
    int k, m;
    while (cin >> k >> m) {
        unordered_set<string> set;
        while (k--) {
            string course;
            cin >> course;
            set.insert(course);
        }

        bool valid = true;
        while (m--) {
            int n, minimum;
            cin >> n >> minimum;
            int cnt = 0;
            while (n--) {
                string course;
                cin >> course;
                if (set.find(course) != set.end()) {
                    cnt++;
                }
            }

            valid &= cnt >= minimum;
        }
        
        cout << (valid ? "yes" : "no") << endl;
    }
}