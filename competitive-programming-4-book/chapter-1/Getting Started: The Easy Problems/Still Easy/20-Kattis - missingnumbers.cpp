#include <iostream>
#include <unordered_set>

using namespace std;
int main () {
    int n;
    unordered_set<int> set;
    int maxVal = 0;

    cin >> n;
    while (n--) {
        int num;
        cin >> num;
        set.insert(num);
        maxVal = num;
    }

    bool valid = true;
    for (int i = 1; i <= maxVal; i++) {
        if (set.find(i) == set.end()) {
            cout << i << endl;
            valid = false;
        }
    }

    if (valid) {
        cout << "good job" << endl;
    }
}