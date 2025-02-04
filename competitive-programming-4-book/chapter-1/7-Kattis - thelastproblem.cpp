#include<iostream>
int main() {
    char s[51];
    scanf("%50[a-zA-Z ]", s);
    printf("Thank you, %s, and farewell!\n", s);
    return 0;
}