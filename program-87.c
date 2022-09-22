//factorial in c program...

#include <stdio.h>

int factorial(int n) {
    if(n == 1 || n == 0){
       return 1;
    }
    else{
        return n * factorial(n - 1);
    }
}


int main() {
    int n;
    printf("Enter your factorial n number: ");
    scanf("%d", &n);

    if(n < 0){
        printf("Undefined \n");
        return 0;
    }
    else{
        int fact = factorial(n);
        printf("Factorial of %d! is %d \n", n, fact);
    }

return 0;
}

