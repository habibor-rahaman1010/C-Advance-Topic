//local static variable in c program...

#include <stdio.h>

void myFunc() {
    int a = 10;
    static int b = 10;

    a = a + 2;  // a += 1;
    b = b + 2; // b += 1;
    printf("a = %d and b = %d \n", a, b);
}

int main() {
    myFunc();
    myFunc();
    myFunc();

return 0;
}
