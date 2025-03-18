#include <bits/stdc++.h>

using namespace std;
int main () {
    int king, queen, rook, bishop, knight, pawns;
    cin >> king >> queen >> rook >> bishop >> knight >> pawns;

    cout << 1 - king << " " << 1 - queen << " " << 2 - rook << " " << 2 - bishop << " " << 2 - knight << " " << 8 - pawns << endl;
}