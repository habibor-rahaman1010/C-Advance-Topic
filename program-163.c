// macro in c program...

#include <stdio.h>

#define MAX(a, b) (a > b ? a : b)  //it's call macro in c...

int main() {
    int a = 45, b = 34;
    double x = 65.324, y = 89.3234;

    printf("Max value is: %d \n", MAX(a, b));
    printf("Max value is: %f \n", MAX(x, y));

return 0;
}
