// find out factorials value in c program use for loop;

#include <stdio.h>

int factorial(int n) {
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        int count = 1, i;
        for(i = 1; i <= n; i++){
            count *= i;
            printf("hello \n");
        }
        return count;
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if(n < 0){
        printf("Undefined!");
    }
    else{
        printf("Factorial of %d! is %d \n", n, factorial(n));
    }

return 0;
}
