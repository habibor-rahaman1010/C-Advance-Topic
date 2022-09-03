//pointer in c program....
#include <stdio.h>
int main() {
    int x = 10;
    int y;
    int z;
    int *ptr;

    printf("Value of x: %d \n", x);
    ptr = &x;
    y = *ptr;
    *ptr = 15;
    z = *ptr;

    printf("Value of x: %d \n", x);
    printf("Value of y: %d \n", y);
    printf("Value of z: %d \n", z);
    printf("Value of *ptr: %d \n", *ptr);
    printf("Address of x: %p \n", &x);
    printf("Address of y: %p \n", &y);
    printf("Value of ptr: %p \n", ptr);

return 0;
}
