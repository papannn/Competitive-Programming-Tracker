#include <iostream>
#include <vector>

using namespace std;
int main () {
    int t;
    cin >> t;
    vector<string> names;
    while (t--) {
        string name;
        cin >> name;
        names.push_back(name);
    }

    int cnt = names.size();
    string song[] = { "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy",
        "birthday", "to", "Rujia", "Happy", "birthday", "to", "you" };
    int songPtr = 0;
    int namePtr = 0;
    while (cnt > 0 || songPtr != 0) {
        cout << names[namePtr++] << ": " << song[songPtr++] << endl;

        if (namePtr == names.size()) {
            namePtr = 0;
        }

        if (songPtr == 16) {
            songPtr = 0;
        }

        cnt--;
    }
}