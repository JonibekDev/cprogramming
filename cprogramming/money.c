#include <stdio.h>

int main() {

    int money, c500, c100, c50, c10, c1;

    printf("Almashtiriladigan pul: ");
    scanf("%d", &money);

    c500 = money / 100000;
    money = money % 100000;

    c100 = money / 50000;
    money = money % 50000;

    c50 = money / 10000;
    money = money % 10000;

    c10 = money / 5000;
    money = money % 5000;

    c1 = money / 1000;
    money = money % 1000;

    printf("100 ming so`m ==> %d ta \n", c500);
    printf("50 so`m ==> %d ta \n", c100);
    printf("10 ming so`m ==> %d ta \n", c50);
    printf("5 ming so`m ==> %d ta \n", c10);
    printf("ming so`m ==> %d ta \n", c1);
    printf("almashtirib bo'lmaydigan pullar ==> %d so`m \n", money);
}