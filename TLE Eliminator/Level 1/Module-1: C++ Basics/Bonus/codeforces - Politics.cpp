#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1818/A
int main () {
    int t;
    cin >> t;
    while (t--) {
        int member, discussion;
        cin >> member >> discussion;

        vector<string> arrDiscussion;
        for (int i = 0 ; i < member; i++) {
            string s;
            cin >> s;
            arrDiscussion.push_back(s);
        }

        unordered_set<int> eligible;
        for (int i = 1 ; i < member; i++) {
            eligible.insert(i);
        }

        for (int i = 0 ; i < discussion; i++) {
            char myOpinion = arrDiscussion[0][i];
            for (int j = 1 ; j < member; j++) {
                if (eligible.find(j) == eligible.end()) {
                    continue;
                }

                char theirOpinion = arrDiscussion[j][i];
                if (theirOpinion != myOpinion) {
                    eligible.erase(j);
                }
            }
        }

        cout << eligible.size() + 1 << endl;
    }
}