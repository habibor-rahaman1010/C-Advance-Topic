//how many number of 1 bit in a number find out in this c program...

#include <stdio.h>
int main() {
    int n, count, i;

    printf("Enter value of n: ");
    scanf("%d", &n);

    count = 0;

    while(n){
        if(n & 1)
            count++;
            n = n >> 1;
    }
    printf("Number of 1: %d \n", count);

return 0;
}
