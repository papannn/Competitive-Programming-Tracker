#include <iostream>

using namespace std;
int main (){
    int t, limit;
    cin >> t >> limit;
    int count = 0;
    while (t--) {
        int n;
        cin >> n;
        if (n <= limit) {
            cout << "It hadn't snowed this early in " << count << " years!" << endl;
            return 0;
        }
        count++;
    }
    cout << "It had never snowed this early!" << endl;
}