//max number is find out in c program use pointer function..

#include <stdio.h>

int max(int x, int y, int z) {
    if(x > y && x > z){
        return x;
    }
    else if(y > x && y > z){
        return y;
    }
    else{
        return z;
    }
}

int operation(int (*op) (int, int, int), int x, int y, int z) {
    op(x, y, z);
}


int main() {
    int x, y, z;
    printf("Enter the value of (x, y, z): ");
    scanf("%d %d %d", &x, &y, &z);

    int result = operation(&max, x, y, z);
    printf("Max value is: %d", result);


return 0;
}
