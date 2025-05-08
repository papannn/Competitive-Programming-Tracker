#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    
    while (t--) {
        long long n;
        cin >> n;
        long long left = 1;
        long long right = n;

        // if (n == 1) {
        //     cout << -1 << endl;
        //     continue;
        // }

        long long check = n * (n + 1) / 2;
        long long squareCheck = sqrt(check);
        if (squareCheck == sqrt(check)) {
            cout << -1 << endl;
            continue;
        }

        
        vector<int> res;
        bool found = true;
        
        deque<int> temp;
        long long ptr = 1;
        long long sum = 0;
        while (ptr <= n || temp.size() > 0) {
            // cout << temp.size() << endl;
            if (temp.size() > 0) {
                long long check = sqrt(sum + temp[0]);
                if (check != sqrt(sum + temp[0])) {
                    res.push_back(temp[0]);
                    sum += temp[0];
                    temp.pop_front();
                } else {
                    temp.push_back(temp[0]);
                    temp.pop_front();
                }
            }

            if (ptr <= n) {
                long long check = sqrt(sum + ptr);
                if (check != sqrt(sum + ptr)) {
                    res.push_back(ptr);
                    sum += ptr;
                    ptr++;
                    continue;
                }

                temp.push_back(ptr);
                ptr++;
            }
            
        }

        for (int i = 0 ; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }

}