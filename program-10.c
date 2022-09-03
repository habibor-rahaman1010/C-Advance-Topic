//pointer in c program..
#include <stdio.h>

int main() {
    double pi = 3.14159265358;
    int *ptr;
    ptr = &pi;

    printf("Value of pi: %lf \n", pi);
    printf("Value of pi: %lf", *ptr);


return 0;
}
