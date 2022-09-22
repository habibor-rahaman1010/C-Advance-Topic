//static global variable in c program..

#include <stdio.h>

int a;
static int b;

void myFunc() {
    a = a + 1;
    b = b + 1;
}

int main() {
    myFunc();
    printf("a = %d \n", a);
    printf("b = %d \n", b);

return 0;
}
