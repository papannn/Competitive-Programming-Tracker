#include <iostream>

using namespace std;
int main () {
    int requirement, proposal;
    int rfpCount = 1;
    while (cin >> requirement >> proposal) {
        cin.ignore();
        if (requirement == 0 && proposal == 0) {
            break;
        }

        int requirementCount = requirement;
        while (requirementCount--) {
            string s;
            getline(cin, s);
        }

        string resName = "";
        long double price = 1e9;
        long double highestCompliance = 0;
        while (proposal--) {
            string proposalName;
            getline(cin, proposalName);

            double currPrice;
            double numReq;
            cin >> currPrice >> numReq;
            cin.ignore();
            long double compliance = numReq / requirement;
            if (compliance > highestCompliance) {
                resName = proposalName;
                price = currPrice;
                highestCompliance = compliance;
            } else if (compliance == highestCompliance) {
                if (currPrice < price) {
                    resName = proposalName;
                    price = currPrice;
                    highestCompliance = compliance;
                }
            }
            
            while (numReq--) {
                string dummy;
                getline(cin, dummy);
            }
        }
        if (rfpCount > 1) {
            cout << endl;
        }
        cout << "RFP #" << rfpCount++ << endl;
        cout << resName << endl;
    }
}