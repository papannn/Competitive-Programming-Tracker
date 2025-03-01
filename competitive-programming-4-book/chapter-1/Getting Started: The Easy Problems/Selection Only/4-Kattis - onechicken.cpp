#include <iostream>
#include <math.h>

int main() {
    int people, chicken;
    std::cin >> people >> chicken;
    int diff = abs(chicken - people);
    std::string piece = diff > 1 ? "pieces" : "piece";
    if (chicken < people) {
        printf("Dr. Chaz needs %d more %s of chicken!\n", diff, piece.c_str());
    } else {
        printf("Dr. Chaz will have %d %s of chicken left over!\n", diff, piece.c_str());
    }
}