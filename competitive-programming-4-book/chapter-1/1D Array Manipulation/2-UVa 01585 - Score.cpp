#include <iostream>
#include <string.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        string score;
        cin >> score;
        int len = score.length();
        int point[len];
        memset(point, 0, sizeof(point));
        
        int res = 0;
        if (score[0] == 'O') {
            point[0] = 1;
            res++;
        }
        
        for (int i = 1 ; i < score.length(); i++) {
            if (score[i] == 'O') {
                point[i] = point[i - 1] + 1;
                res += point[i];
            }
        }

        cout << res << endl;
    }
    
}