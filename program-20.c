//NULL pointer in c program...
#include <stdio.h>

int main() {
    int x = 100;
    int *ptr = NULL;

    printf("Value of x: %d \n", x);
    ptr = &x;
    printf("Value of *ptr: %d \n", *ptr);
    ptr = &x;
    *ptr = 130;
    printf("Value of *ptr: %d \n", *ptr);

return 0;
}


