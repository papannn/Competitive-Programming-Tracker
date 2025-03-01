#include <iostream>

using namespace std;
int main () {
    int t;
    cin >> t;
    cin.ignore();
    bool found = false;
    while (t--) {
        int menu;
        cin >> menu;
        cin.ignore();

        string restaurant;
        getline(cin, restaurant);
        bool foundPancake = false;
        bool foundPea = false;
        while (menu--) {
            string m;
            getline(cin, m);
            foundPancake |= m.compare("pancakes") == 0;
            foundPea |= m.compare("pea soup") == 0;
        }

        if (foundPancake && foundPea && !found) {
            found = true;
            cout << restaurant << endl;
        }
    }
    
    if (!found) {
        cout << "Anywhere is fine I guess" << endl;
    }
}