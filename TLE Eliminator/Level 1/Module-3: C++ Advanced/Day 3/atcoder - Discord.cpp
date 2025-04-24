#include <bits/stdc++.h>

using namespace std;
// https://atcoder.jp/contests/abc303/tasks/abc303_b
int main () {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> person (n + 1);

    for (int i = 0 ; i < person.size(); i++) {
        vector<int> relationship (n + 1);
        person[i] = relationship;
    }

    for (int i = 0; i < m; i++) {
        vector<int> photo;
        for (int j = 0; j < n; j++) {
            int num;
            cin >> num;
            photo.push_back(num);
        }

        for (int j = 0 ; j < n; j++) {
            if (j != 0) {
                person[photo[j]][photo[j - 1]] = 1;
            }

            if (j != n - 1) {
                person[photo[j]][photo[j + 1]] = 1;
            }
        }
    }

    int res = 0;
    for (int i = 1; i < person.size(); i++) {
        for (int j = 1; j < person[i].size(); j++) {
            if (i == j) {
                continue;
            }

            if (person[i][j] == 0) {
                res++;
                person[j][i] = 1;
            }
        }
    }

    cout << res << endl;
}