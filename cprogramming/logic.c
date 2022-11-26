#include <stdio.h>

int main() {
    
    int a = 100;
    printf("AND %d \n", (a >= 100) && (a <= 200));  
    printf("OR %d \n", (a >= 100) || (a <= 200));
    printf("NOT %d \n", !(a == 100));

    printf("10 & 7 = %d \n", 10 & 7);
    printf("123 & 456 = %d \n", 123 & 456);
    printf("0xFFFF & 0000 = %d", 0xFFFF & 0000);

    printf("10 | 7 = %d \n", 10 | 7);
    printf("123 | 456 = %d \n", 123 | 456);
    printf("0xFFFF | 0000 = %d \n", 0xFFFF | 0000);

    int b = 12345;
    printf("%d \n", ~b + 1);

    int c = 10;
    printf("one time left shift for %d : %d \n", c, c << 1);
    printf("two time left shift for %d : %d \n", c, c << 2);
    printf("three time left shift for %d : %d \n", c, c << 3);

    int d = 10;
    printf("one time right shift for %d : %d \n", d, d >> 1);
    printf("two time right shift for %d : %d \n", d, d >> 2);
    printf("three time right shift for %d : %d \n", d, d >> 3);

}