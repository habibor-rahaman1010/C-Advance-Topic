//local and global variable in c program...

#include <stdio.h>

int x = 2, y = 5, z = 7;
int sum = 0, minus = 0;

void doSum(int x, int y, int z) {
    int sum = 50;
    sum  += x + y + z;
    printf("Sum is = %d \n", sum);
}

void doMinus(int x, int y, int z) {
    int minus = 10;
    minus -= x - y - z;  //10 - 20 = -10 ans...
    printf("Minus is = %d \n", minus);
}

int main() {
    int x = 70;
    int y = 30;
    int z = 20;

    doSum(x, y, z);
    doMinus(x, y, z);

return 0;
}
