// two number divide in c program use pointer variable...

#include <stdio.h>
int main() {
    int x = 32, y = 43, sum = 0;

    int *ptr1, *ptr2, *ptr3;

    ptr1 = &x;
    ptr2 = &y;
    ptr3 = &sum;

    //set new value of pointer variable...
    *ptr1 = 50;
    *ptr2 = 2;
    *ptr3 = 0;

    *ptr3 = (*ptr1 / *ptr2);
    printf("Total sum is: %d", *ptr3);

return 0;
}


