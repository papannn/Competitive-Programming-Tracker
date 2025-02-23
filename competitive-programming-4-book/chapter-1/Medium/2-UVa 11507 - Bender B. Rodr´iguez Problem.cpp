#include <iostream>
#include <unordered_map>

using namespace std;
int main () {
    unordered_map<string, string> map = {
        {"+x_+y", "+y"},
        {"+x_-y", "-y"},
        {"+x_+z", "+z"},
        {"+x_-z", "-z"},

        {"-x_+y", "-y"},
        {"-x_-y", "+y"},
        {"-x_+z", "-z"},
        {"-x_-z", "+z"},
        
        {"+y_+y", "-x"},
        {"+y_-y", "+x"},
        {"+y_+z", "+y"},
        {"+y_-z", "+y"},

        {"-y_+y", "+x"},
        {"-y_-y", "-x"},
        {"-y_+z", "-y"},
        {"-y_-z", "-y"},

        {"+z_+y", "+z"},
        {"+z_-y", "+z"},
        {"+z_+z", "-x"},
        {"+z_-z", "+x"},

        {"-z_+y", "-z"},
        {"-z_-y", "-z"},
        {"-z_+z", "+x"},
        {"-z_-z", "-x"},
    };

    int l;
    while (cin >> l) {
        if (l == 0) {
            break;
        }

        string state = "+x";
        for (int i = 0 ; i < l - 1; i++) {
            string newState;
            cin >> newState;

            if (newState.compare("No") == 0) {
                continue;
            }

            string combine = state + "_" + newState;
            state = map[combine];
        }

        cout << state << endl;
    }
}