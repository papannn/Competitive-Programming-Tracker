#include <iostream>

int main() {
    int g,s,c;
    std::cin >> g >> s >> c;

    int buyingPower = g * 3 + s * 2 + c * 1;
    std::string victoryCard = "";
    if (buyingPower >= 8) {
        victoryCard = "Province";
    } else if (buyingPower >= 5) {
        victoryCard = "Duchy";
    } else if (buyingPower >= 2) {
        victoryCard = "Estate";
    }

    std::string treasure = "";
    if (buyingPower >= 6) {
        treasure = "Gold";
    } else  if (buyingPower >= 3) {
        treasure = "Silver";
    } else {
        treasure = "Copper";
    }

    if (victoryCard.compare("") != 0) {
        std::cout << victoryCard << " or " << treasure << std::endl;
    } else {
        std::cout << treasure << std::endl;
    }
}