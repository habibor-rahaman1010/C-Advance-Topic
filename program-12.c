
#include <stdio.h>
int main() {
    int x = 10;
    int *ptr;

    printf("Value of x: %d \n", x);

    ptr = &x;
    *ptr = 20;

    printf("Value of x: %d \n", x);

    x = 15;

    printf("Value of x: %d \n", x);
    printf("Value stored at location %p is %d \n", ptr, *ptr);

    printf("Address of x: %p \n", &x);
    printf("Value of ptr: %p \n", ptr);


return 0;
}
