//local and global variable in c program...

#include <stdio.h>

int x = 1;

void myfunction(int y) {
    y = y * 2;
    x = x + 10;
    printf("myfunction, x = %d and y = %d \n", x, y);
}

int main() {
    int y = 5;
    x = 10;
    myfunction(y);
    printf("Main, x = %d and y = %d \n", x, y);

return 0;
}
