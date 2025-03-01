#include <bits/stdc++.h>

using namespace std;
int main () {
    long long parkingSpace, cars;
    vector<long long> parkingStateArr;
    vector<long long> parkingPriceArr;
    vector<long long> carArr;

    cin >> parkingSpace >> cars;
    while (parkingSpace--) {
        long long price;
        cin >> price;
        parkingPriceArr.push_back(price);
        parkingStateArr.push_back(-1);
    }

    while (cars--) {
        long long carWeight;
        cin >> carWeight;
        carArr.push_back(carWeight);
    }
    
    deque<long long> carQueue;
    long long parkingAvail = parkingStateArr.size();
    long long res = 0;
    for (int i = 0 ; i < carArr.size() * 2; i++) {
        long long carId;
        cin >> carId;
        
        if (carId > 0) { // In
            if (parkingAvail > 0) {
                parkingAvail--;
                int idx = -1;
                for (int i = 0 ; i < parkingStateArr.size(); i++) {
                    if (parkingStateArr[i] == -1) {
                        idx = i;
                        break;
                    }
                }
                res += parkingPriceArr[idx] * carArr[carId - 1];
                parkingStateArr[idx] = carId - 1;
            } else {
                carQueue.push_back(carId);
            }
        } else { // Out
            parkingAvail++;
            int idx = -1;
            for (int i = 0 ; i < parkingStateArr.size(); i++) {
                if (parkingStateArr[i] == abs(carId) - 1) {
                    idx = i;
                    break;
                }
            }
            parkingStateArr[idx] = -1;
        }

        while (parkingAvail > 0 && carQueue.size() > 0) {
            int carId = carQueue[0];
            carQueue.pop_front();
            parkingAvail--;
            int idx = -1;
            for (int i = 0 ; i < parkingStateArr.size(); i++) {
                if (parkingStateArr[i] == -1) {
                    idx = i;
                    break;
                }
            }
            res += parkingPriceArr[idx] * carArr[carId - 1];
            parkingStateArr[idx] = carId - 1;
        }
    }

    cout << res << endl;
}