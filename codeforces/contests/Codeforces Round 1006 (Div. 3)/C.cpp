#include <iostream>
#include <vector>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n, x;
        cin >> n >> x;
        if (n == 1) {
            cout << x << endl;
            continue;
        }

        vector<long long> res;
        long long num = 0;
        long long total = 0;
        while ((num & x) == num && res.size() < n) {
            total |= num;
            res.push_back(num++);
        }

        if (total < x) {
            if (res.size() == n)
                res.pop_back();
            res.push_back(x);
        }

        while (res.size() < n) {
            res.push_back(0);
        }

        for (long long num : res) {
            cout << num << " ";
        }
        cout << endl;
    }
}