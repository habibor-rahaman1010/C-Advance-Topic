// two number summation in c program use pointer variable...

#include <stdio.h>
int main() {
    int x, y, sum;

    int *ptr1, *ptr2, *ptr3;

    ptr1 = &x;
    ptr2 = &y;
    ptr3 = &sum;

    //set value of pointer variable...
    *ptr1 = 18;
    *ptr2 = 6;
    *ptr3 = 0;

    *ptr3 = (*ptr1 / *ptr2);
    printf("Total sum is: %d", *ptr3);

return 0;
}



