//NULL pointer in c program...

#include <stdio.h>
int main() {
    int *ptr = NULL;
    *ptr = 100;
    printf("Value of *ptr: %d \n", *ptr);

return 0;
}
