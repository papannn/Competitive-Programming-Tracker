#include <iostream>

using namespace std;
int main () {
    int n, m;
    cin >> n >> m;
    char matrix[n][m];
    bool visited[n][m];
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m; j++) {
            cin >> matrix[i][j];
            visited[i][j] = false;
        }
    }

    int x = 0, y = 0;
    int res = 0;
    while (true) {
        if (x < 0 || y < 0 || x > m - 1 || y > n - 1) {
            cout << "Out" << endl;
            return 0;
        }

        if (visited[y][x]) {
            cout << "Lost" << endl;
            return 0;
        }

        visited[y][x] = true;

        if (matrix[y][x] == 'N') {
            y--;
        } else if (matrix[y][x] == 'S') {
            y++;
        } else if (matrix[y][x] == 'W') {
            x--;
        } else if (matrix[y][x] == 'E') {
            x++;
        } else {
            cout << res << endl;
            return 0;
        }
        res++;
    }

}