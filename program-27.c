//multi level pointer inside of pointer in c program...

#include <stdio.h>
int main() {
    char ch = 'H';
    char *ptr, **inside_ptr, ***inside_ptr2;

    ptr = &ch;
    inside_ptr = &ptr;
    inside_ptr2 = &inside_ptr;

    printf("value of ch: %c \n", ch);
    printf("value of *ptr: %c \n", *ptr);
    printf("value of **inside_ptr: %c \n", **inside_ptr);
    printf("value of ***inside_ptr2: %c \n", ***inside_ptr2);

    printf("memory address of ch: %p \n", &ch);
    printf("memory address of *ptr: %p \n", ptr);
    printf("memory address of **inside_ptr: %p \n", inside_ptr);
    printf("memory address of ***inside_ptr2: %p \n", inside_ptr2);


return 0;
}

