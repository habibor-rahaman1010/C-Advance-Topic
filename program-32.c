//pointer in pointer in c program..

#include <stdio.h>
int main() {
    char ch = 'A';
    char *ptr, **ptr2;

    ptr = &ch;
    ptr2 = &ptr;

    **ptr2 = 'B';

    printf("Value of x: %c \n", ch);
    printf("Value of *ptr: %c \n", *ptr);
    printf("Value of **ptr2: %c \n", **ptr2);

return 0;
}

