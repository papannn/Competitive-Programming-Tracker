#include <iostream>
#include <vector>

using namespace std;
int main () {
    int n;
    cin >> n;

    vector<int> teaPrice;
    while (n--) {
        int price;
        cin >> price;
        teaPrice.push_back(price);
    }

    int m;
    cin >> m;
    vector<int> toppingPrice;
    while (m--) {
        int price;
        cin >> price;
        toppingPrice.push_back(price);
    }

    long long cheapestPrice = 1e9;
    for (int i = 0 ; i < teaPrice.size(); i++) {
        int k;
        cin >> k;
        while (k--) {
            int topping;
            cin >> topping;
            long long price = teaPrice[i] + toppingPrice[topping - 1];
            cheapestPrice = min(cheapestPrice, price);
        }
    }

    long long money;
    cin >> money;
    cout << (money / cheapestPrice - 1 > 0 ? money / cheapestPrice - 1 : 0) << endl;
}