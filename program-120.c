//how many number of 1 bit in a number find out in this c program...

#include <stdio.h>
int main() {
   // int n = 32;
    int n = sizeof(int) * 4;
    int i, count = 0, num;

    printf("Enter the num: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++){
        if(num & (1 << i))
            count++;
    }
    printf("Number of 1: %d \n", count);

return 0;
}
