#include<iostream>
#include<string>

using namespace std;
int main() {
    string month;
    int date;

    cin >> month >> date;
    if ((month.compare("OCT") == 0 && date == 31) || (month.compare("DEC") == 0 && date == 25)) {
        cout << "yup" << endl;
    } else {
        cout << "nope" << endl;
    }
}