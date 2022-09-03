//char pointer in c program...

#include <stdio.h>
int main() {
    char ch1 = 'H', ch2 = 'B', ch3 = 'M';
    char *ptr1 = &ch1, *ptr2 = &ch2, *ptr3 = &ch3;

    printf("Value of character: %c, %c, %c \n", ch1, ch2, ch3);
    printf("Value of character: %c, %c, %c \n", *ptr1, *ptr2, *ptr3);

    printf("Value of address character: %p  %p  %p \n", ptr1, ptr2, ptr3);
    printf("Value of address character: %p  %p  %p \n", &ch1, &ch2, &ch3);

return 0;
}
