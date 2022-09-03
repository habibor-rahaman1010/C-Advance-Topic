//pointer inside of pointer in c program...

#include <stdio.h>
int main() {
    char ch = 'H';
    char *ptr, **inside_ptr;

    ptr = &ch;
    inside_ptr = &ptr;

    printf("value of ch: %c \n", ch);
    printf("value of *ptr: %c \n", *ptr);
    printf("value of **inside_ptr: %c \n", **inside_ptr);

    printf("memory address of ch: %p \n", &ch);
    printf("memory address of *ptr: %p \n", ptr);
    printf("memory address of **inside_ptr: %p \n", inside_ptr);


return 0;
}
