//pointer in c program...

#include <stdio.h>

int main() {
    char *str = "Bangladesh";

    printf("%c %c %c %c %c %c \n", *str, *(str + 1), *(str + 2), *(str + 3), *(str + 4), *(str + 5));

    printf("%c %c %c %c %c %c \n", *str, *str + 1, *str + 2, *str + 3, *str + 4, *str + 5);

return 0;
}
