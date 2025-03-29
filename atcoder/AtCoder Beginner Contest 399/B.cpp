#include <bits/stdc++.h>

using namespace std;
int main () {
    int n;
    cin >> n;   

    vector<int> arr;
    vector<int> rank;
    for (int i = 0 ; i < n; i++) {
        int num;
        cin >> num;
        arr.push_back(num);
        rank.push_back(num);
    }

    sort(rank.begin(), rank.end(), greater<int>());
    for (int j = 0 ; j < arr.size(); j++) {
        int ranking = 1;
        for (auto i = 0; i < rank.size(); i++, ranking++) {
            if (arr[j] == rank[i]) {
                break;
            }
        }
        cout << ranking << endl;
    }

    // for (auto i = rank.rbegin(); i != rank.rend(); i++) {
    //     cout << *i << endl;
    // }
}