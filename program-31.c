//pointer in pointer in c program..

#include <stdio.h>
int main() {
    int x = 10;
    int *ptr, **ptr2;

    ptr = &x;
    ptr2 = &ptr;

    **ptr2 = 25;

    printf("Value of x: %d \n", x);
    printf("Value of *ptr: %d \n", *ptr);
    printf("Value of **ptr2: %d \n", **ptr2);

return 0;
}
