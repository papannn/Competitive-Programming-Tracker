#include <iostream>
#include <iomanip>

using namespace std;
int main () {
    string cmd;

    int totalStock = 0;
    long double avgPrice = 0;
    long double profit = 0;
    while (cin >> cmd) {
        if (cmd.compare("buy") == 0) {
            int amount;
            long double price;
            cin >> amount >> price;
            avgPrice = (avgPrice * totalStock + price * amount) / (totalStock + amount);
            totalStock += amount;
            profit -= price * amount;
        } else if (cmd.compare("split") == 0) {
            int amount;
            cin >> amount;
            totalStock *= amount;
            avgPrice /= amount;
        } else if (cmd.compare("sell") == 0) {
            int amount;
            long double price;
            cin >> amount >> price;
            profit += price * amount;
            totalStock -= amount;
        } else if (cmd.compare("merge") == 0) {
            int amount;
            cin >> amount;
            int tempStock = totalStock - (totalStock % amount);
            avgPrice = amount * avgPrice;
            totalStock = tempStock / amount;
        } else if (cmd.compare("die") == 0) {
            long double price;
            cin >> price;
            long double amt = price - avgPrice;
            if (price > avgPrice) {
                long double res = (price - amt * 0.3) * totalStock;
                cout << fixed << setprecision(2) << res << endl;
            } else {
                long double res = price * totalStock;
                cout << fixed << setprecision(2) << res << endl;
            }
        }
    }
}