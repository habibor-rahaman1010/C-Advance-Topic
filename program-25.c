//find out memory address of pointer variable in c program....

#include <stdio.h>
int main() {
    char ch = 'H';
    char *ptr;
    ptr = &ch;

    printf("Address of ch: %p \n", ptr);
    printf("Address of ptr: %p \n", &ptr);


return 0;
}
