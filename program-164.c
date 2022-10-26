// macro use in c program...

#include <stdio.h>

#define SWAP(a, b) {\
    a ^= b;\
    b ^= a;\
    a ^= b;\
}

int main() {
    int a = 85, b = 95;
    printf("a = %d, b = %d \n", a, b);

    SWAP(a, b);

    printf("a = %d, b = %d \n", a, b);

return 0;
}
