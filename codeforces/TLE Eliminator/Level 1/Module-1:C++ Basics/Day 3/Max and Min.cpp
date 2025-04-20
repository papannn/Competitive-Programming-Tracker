#include <bits/stdc++.h>

using namespace std;
int main () {
    int a, b, c;
    cin >> a >> b >> c;
    int maxVal = max(a, max(b, c));
    int minVal = min(a, min(b, c));

    cout << minVal << " " << maxVal << endl;
}