//pointer in c program...

#include <stdio.h>
int main() {
    int x = 10, y;
    int *ptr1, *ptr2;

    ptr1 = &x;
    ptr2 = &y;
    y = *ptr1;
    *ptr1 = 15;

    printf("Value of x: %d \n", x);
    printf("Value of y: %d \n", y);
    printf("Value of *pt1: %d \n", *ptr1);
    printf("Value of *ptr2: %d \n", *ptr2);


return 0;
}
