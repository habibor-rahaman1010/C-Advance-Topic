#include <stdio.h>

int main() {
    int x = 10;
    int *ptr;
    ptr = &x;
    printf("value of x: %d \n", x);

    *ptr = 20;
    printf("value of x: %d \n", x);
    printf("value of x: %p \n", &x);
    printf("value of x: %p \n", ptr);


return 0;
}
