//pointer calculation in c program

#include <stdio.h>

int main() {
    int ara[] = {100, 300, 500, 700, 900};
    int *ptr;
    ptr = ara;

    printf("*ptr: %d \n", *ptr);
    printf("*ptr + 1: %d \n", *ptr + 1);
    printf("*(ptr + 1): %d \n", *(ptr + 1));
    printf("*ptr + 2: %d \n", *ptr + 2);
    printf("*(ptr + 2): %d \n", *(ptr + 2));

return 0;
}
