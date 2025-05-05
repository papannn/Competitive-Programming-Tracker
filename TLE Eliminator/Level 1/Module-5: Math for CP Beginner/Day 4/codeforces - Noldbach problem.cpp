#include <bits/stdc++.h>

using namespace std;
bool isPrime (int n) {
    bool valid = true;
    for (int j = 2; j <= sqrt(n); j++) {
        if (n % j == 0) {
            valid = false;
            break;
        }
    }

    return valid;
}


int main () {
    int n, k;
    cin >> n >> k;

    vector<int> primeList;
    for (int i = 2; i <= n; i++) {
        bool valid = isPrime(i);
        
        if (valid) {
            primeList.push_back(i);
        }
    }

    int res = 0;
    for (int i = 0 ; i < primeList.size() - 1; i++) {
        if (primeList[i] + primeList[i + 1] + 1 > n) {
            break;
        }

        if (isPrime(primeList[i] + primeList[i + 1] + 1)) {
            res++;
        }
    }
    cout << (res >= k ? "YES" : "NO") << endl;
}