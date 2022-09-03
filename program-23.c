//string and pointer in c program....

#include <stdio.h>
int main() {
    char message[] = "Hello, Bangladesh i love you!";
    char *ptr;
    ptr = message;

    ptr = message;
    printf("%s \n", message);
    printf("%c \n", *ptr);
    printf("Address: %p \n", ptr);
    printf("Address: %p \n", message);

return 0;
}

