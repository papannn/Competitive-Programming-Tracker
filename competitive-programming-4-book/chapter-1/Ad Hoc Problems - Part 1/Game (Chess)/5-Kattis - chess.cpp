#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        char currXChar;
        int currY;

        char targetXChar;
        int targetY;

        cin >> currXChar >> currY >> targetXChar >> targetY;

        if (currXChar == targetXChar && currY == targetY) {
            cout << 0 << " " << currXChar << " " << currY << endl;
            continue;
        }

        int currX = currXChar - 'A' + 1;
        int targetX = targetXChar - 'A' + 1;

        int x;
        int y;
        bool found = false;

        x = currX;
        y = currY;
        
        x--;
        y++;
        // Top Left
        while (x > 0 && y <= 8 && !found) {
            char xChar = x - 1 + 'A';
            // cout << xChar << endl;
            if (x == targetX && y == targetY) {
                cout << 1 << " " << currXChar << " " << currY << " " << xChar << " " << y << endl;
                found = true;
            }

            int x1;
            int y1;

            x1 = x;
            y1 = y;
            x1--;
            y1--;
            // Bottom Left
            while (x1 >= 0 && y1 >= 0 && !found) {
                char xChar1 = x1 - 1 + 'A';
                if (x1 == targetX && y1 == targetY) {
                    cout << 2 << " " << currXChar << " " << currY << " " 
                        << xChar << " " << y << " " << xChar1 << " " << y1 << endl;
                    found = true;
                }
                x1--;
                y1--;
            }

            x1 = x;
            y1 = y;
            x1++;
            y1++;
            // Top right
            while (x1 <= 8 && y1 <= 8 && !found) {
                char xChar1 = x1 - 1 + 'A';
                if (x1 == targetX && y1 == targetY) {
                    cout << 2 << " " << currXChar << " " << currY << " " 
                        << xChar << " " << y << " " << xChar1 << " " << y1 << endl;
                    found = true;
                }
                x1++;
                y1++;
            }
            //
            x--;
            y++;
        }

        x = currX;
        y = currY;
        x++;
        y--;
        // Bot Right
        while (x <= 8 && y >= 0 && !found) {
            char xChar = x - 1 + 'A';
            if (x == targetX && y == targetY) {
                cout << 1 << " " << currXChar << " " << currY << " " << xChar << " " << y << endl;
                found = true;
            }

            int x1;
            int y1;

            x1 = x;
            y1 = y;
            x1--;
            y1--;
            // Bottom Left
            while (x1 >= 0 && y1 >= 0 && !found) {
                char xChar1 = x1 - 1 + 'A';
                if (x1 == targetX && y1 == targetY) {
                    cout << 2 << " " << currXChar << " " << currY << " " 
                        << xChar << " " << y << " " << xChar1 << " " << y1 << endl;
                    found = true;
                }
                x1--;
                y1--;
            }

            x1 = x;
            y1 = y;
            x1++;
            y1++;
            // Top right
            while (x1 <= 8 && y1 <= 8 && !found) {
                char xChar1 = x1 - 1 + 'A';
                if (x1 == targetX && y1 == targetY) {
                    cout << 2 << " " << currXChar << " " << currY << " " 
                        << xChar << " " << y << " " << xChar1 << " " << y1 << endl;
                    found = true;
                }
                x1++;
                y1++;
            }
            //
            x++;
            y--;
        }

        
        x = currX;
        y = currY;
        x++;
        y++;
        // Top Right
        while (x <= 8 && y <= 8 && !found) {
            char xChar = x - 1 + 'A';
            // cout << xChar << endl;
            if (x == targetX && y == targetY) {
                cout << 1 << " " << currXChar << " " << currY << " " << xChar << " " << y << endl;
                found = true;
            }

            int x1;
            int y1;

            x1 = x;
            y1 = y;
            x1--;
            y1++;
            // Top Left
            while (x1 >= 0 && y1 <= 8 && !found) {
                char xChar1 = x1 - 1 + 'A';
                if (x1 == targetX && y1 == targetY) {
                    cout << 2 << " " << currXChar << " " << currY << " " 
                        << xChar << " " << y << " " << xChar1 << " " << y1 << endl;
                    found = true;
                }
                x1--;
                y1++;
            }

            x1 = x;
            y1 = y;
            x1++;
            y1--;
            // Bottom right
            while (x1 <= 8 && y1 >= 0 && !found) {
                char xChar1 = x1 - 1 + 'A';
                if (x1 == targetX && y1 == targetY) {
                    cout << 2 << " " << currXChar << " " << currY << " " 
                        << xChar << " " << y << " " << xChar1 << " " << y1 << endl;
                    found = true;
                }
                x1++;
                y1--;
            }
            //
            x++;
            y++;
        }


        x = currX;
        y = currY;
        x--;
        y--;
        // Bottom Left
        while (x > 0 && y >= 0 && !found) {
            char xChar = x - 1 + 'A';
            if (x == targetX && y == targetY) {
                cout << 1 << " " << currXChar << " " << currY << " " << xChar << " " << y << endl;
                found = true;
            }

            int x1;
            int y1;

            x1 = x;
            y1 = y;
            x1--;
            y1++;
            // Top Left
            while (x1 >= 0 && y1 <= 8 && !found) {
                char xChar1 = x1 - 1 + 'A';
                if (x1 == targetX && y1 == targetY) {
                    cout << 2 << " " << currXChar << " " << currY << " " 
                        << xChar << " " << y << " " << xChar1 << " " << y1 << endl;
                    found = true;
                }
                x1--;
                y1++;
            }

            x1 = x;
            y1 = y;
            x1++;
            y1--;
            // Bottom right
            while (x1 <= 8 && y1 >= 0 && !found) {
                char xChar1 = x1 - 1 + 'A';
                if (x1 == targetX && y1 == targetY) {
                    cout << 2 << " " << currXChar << " " << currY << " " 
                        << xChar << " " << y << " " << xChar1 << " " << y1 << endl;
                    found = true;
                }
                x1++;
                y1--;
            }
            //
            x--;
            y--;
        }

        if (!found) {
            cout << "Impossible" << endl;
        }
    }
}