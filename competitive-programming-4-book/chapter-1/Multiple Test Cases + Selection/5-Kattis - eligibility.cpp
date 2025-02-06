#include <iostream>
#include <string>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string name;
        string postSecondaryStudy;
        string dob;
        int courses;

        cin >> name >> postSecondaryStudy >> dob >> courses;
        int postYear = stoi(postSecondaryStudy.substr(0, 4));
        int dobYear = stoi(dob.substr(0, 4));
        cout << name << " ";

        string res = "";
        if (postYear >= 2010) {
            cout << "eligible" << endl;
            continue;
        }

        if (dobYear >= 1991) {
            cout << "eligible" << endl;
            continue;
        }

        if (courses >= 41) {
            cout << "ineligible" << endl;
            continue;
        }

        cout << "coach petitions" << endl;
    }
}