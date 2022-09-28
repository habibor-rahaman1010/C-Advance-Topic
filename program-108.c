//even odd number find out use & and operator...

#include <stdio.h>
int main() {
    int n;
    printf("Enter your number of n: ");
    scanf("%d", &n);

    if((n & 1) == 0){
        printf("%d is even number \n", n);
    }
    else{
        printf("%d is odd number \n", n);
    }

return 0;
}

