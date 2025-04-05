#include <bits/stdc++.h>

using namespace std;
int main () {
    int n;
    vector<vector<unordered_map<string, int>>> direction = {
        {},
        { // 1 //
            { // North
                {"north", 5},
                {"west", 3},
                {"east", 4},
                {"south", 2}
            },
            { // West
                {"north", 3},
                {"west", 2},
                {"east", 5},
                {"south", 4}
            },
            { // South
                {"north", 2},
                {"west", 4},
                {"east", 3},
                {"south", 5}
            },
            { // East
                {"north", 4},
                {"west", 5},
                {"east", 2},
                {"south", 3}
            },
        },
        { // 2 //
            { // North
                {"north", 1},
                {"west", 3},
                {"east", 4},
                {"south", 6}
            },
            { // West
                {"north", 3},
                {"west", 6},
                {"east", 1},
                {"south", 4}
            },
            { // South
                {"north", 6},
                {"west", 4},
                {"east", 3},
                {"south", 1}
            },
            { // East
                {"north", 4},
                {"west", 1},
                {"east", 6},
                {"south", 3}
            },
        
        },
        { // 3 //
            { // North
                {"north", 5},
                {"west", 6},
                {"east", 1},
                {"south", 2}
            },
            { // West
                {"north", 6},
                {"west", 2},
                {"east", 5},
                {"south", 1}
            },
            { // South
                {"north", 2},
                {"west", 1},
                {"east", 6},
                {"south", 5}
            },
            { // East
                {"north", 1},
                {"west", 5},
                {"east", 2},
                {"south", 6}
            }
        },
        { // 4 //
            { // North
                {"north", 5},
                {"west", 1},
                {"east", 6},
                {"south", 2}
            },
            { // West
                {"north", 1},
                {"west", 2},
                {"east", 5},
                {"south", 6}
            },
            { // South
                {"north", 2},
                {"west", 6},
                {"east", 1},
                {"south", 5}
            },
            { // East
                {"north", 6},
                {"west", 5},
                {"east", 2},
                {"south", 1}
            },
        },
        { // 5
            { // North
                {"north", 6},
                {"west", 3},
                {"east", 4},
                {"south", 1}
            },
            { // West
                {"north", 3},
                {"west", 1},
                {"east", 6},
                {"south", 4}
            },
            { // South
                {"north", 1},
                {"west", 4},
                {"east", 3},
                {"south", 6}
            },
            { // East
                {"north", 4},
                {"west", 6},
                {"east", 1},
                {"south", 3}
            },
        },
        { // 6
            { // North
                {"north", 5},
                {"west", 4},
                {"east", 3},
                {"south", 2}
            },
            { // West
                {"north", 4},
                {"west", 2},
                {"east", 5},
                {"south", 3}
            },
            { // South
                {"north", 2},
                {"west", 3},
                {"east", 4},
                {"south", 5}
            },
            { // East
                {"north", 3},
                {"west", 5},
                {"east", 2},
                {"south", 4}
            },
        }
    }; 

    while (cin >> n) {
        if (n == 0) {
            break;
        }

        int pos = 1;
        int facing = 0;
        int facingVert = 0;
        while (n--) {
            string s;
            cin >> s;

            pos = direction[pos][facing][s];
            if (s.compare("west") == 0) {
                facing++;
                if (facing == 4) {
                    facing = 0;
                }
            } else if (s.compare("east") == 0) {
                facing--;
                if (facing == -1) {
                    facing = 3;
                }
            } else if (s.compare("north") == 0) {
                facingVert++;
                if (facingVert == 2) {
                    facingVert = 0;
                    facing++;
                    if (facing == 4) {
                        facing = 0;
                    }
                    facing++;
                    if (facing == 4) {
                        facing = 0;
                    }
                }
            } else {
                facingVert--;
                if (facingVert == -2) {
                    // cout << "HEY" << endl;
                    facingVert = 0;
                    facing++;
                    if (facing == 4) {
                        facing = 0;
                    }
                    facing++;
                    if (facing == 4) {
                        facing = 0;
                    }
                }
            }
            cout << pos << endl;
        }
        // cout << pos << endl;
    }
}