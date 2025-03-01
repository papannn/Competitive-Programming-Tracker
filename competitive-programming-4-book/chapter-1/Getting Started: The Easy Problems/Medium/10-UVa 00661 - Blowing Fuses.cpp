#include <iostream>
#include <vector>

using namespace std;
int main () {
    int numberDevices, operationPerformed, capacityFuses;
    int seq = 1;
    while (cin >> numberDevices >> operationPerformed >> capacityFuses) {
        if (numberDevices == 0) {
            break;
        }
        vector<int> devicePower;
        vector<bool> deviceState(numberDevices);
        while (numberDevices--) {
            int power;
            cin >> power;
            devicePower.push_back(power);
        }

        int ampUsed = 0;
        int maxVal = 0;
        bool explode = false;
        while (operationPerformed--) {
            int whichDevice;
            cin >> whichDevice;
            if (deviceState[whichDevice - 1]) {
                ampUsed -= devicePower[whichDevice - 1];
            } else {
                ampUsed += devicePower[whichDevice - 1];
            }
            deviceState[whichDevice - 1] = !deviceState[whichDevice - 1];

            if (ampUsed > capacityFuses) {
                explode = true;
            }

            maxVal = max(maxVal, ampUsed);
        }

        cout << "Sequence " << seq++ << endl;
        if (explode) {
            cout << "Fuse was blown." << endl;
        } else {
            cout << "Fuse was not blown." << endl;
            cout << "Maximal power consumption was " << maxVal << " amperes." << endl;
        }
        cout << endl;
    }
}