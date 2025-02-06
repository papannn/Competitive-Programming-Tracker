#include <iostream>
#include <string.h>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        char problem[10];
        scanf("%s", problem);
        if (strcmp(problem, "P=NP") == 0) {
            cout << "skipped" << endl;
            continue;
        }
        int first = atoi(strtok(problem, "+"));
        int second = atoi(strtok(NULL, "+"));

        printf("%d\n", first + second);
    }
}