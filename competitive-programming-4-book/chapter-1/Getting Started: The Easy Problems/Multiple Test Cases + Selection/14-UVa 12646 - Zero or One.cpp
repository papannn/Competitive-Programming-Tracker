#include <iostream>

using namespace std;
int main () {
    int arr[3];
    while (scanf("%d %d %d", &arr[0], &arr[1], &arr[2]) != EOF) {
        int count = 0;
        for (int i = 0 ; i < 3; i++) {
            if (arr[i] == 1) {
                count++;
            }
        }

        if (count == 0 || count == 3) {
            cout << "*" << endl;
            continue;
        }

        int comp = 0;
        if (count == 1) {
            comp = 1;
        }
        string name[] = {"A", "B", "C"};
        for (int i = 0 ; i < 3; i++) {
            if (arr[i] == comp) {
                cout << name[i] << endl;
                break;
            }
        }
    }
}