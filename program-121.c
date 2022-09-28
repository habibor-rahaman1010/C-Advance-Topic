// 2 number are equal or not figure out in c program...

#include <stdio.h>
int main() {
    int n, m;
    printf("Enter the number of n and m: ");
    scanf("%d %d", &n, &m);

    if(n ^ m){
        puts("Number are not equal! \n");
    }
    else{
        puts("Number are equal! \n");
    }

return 0;
}
