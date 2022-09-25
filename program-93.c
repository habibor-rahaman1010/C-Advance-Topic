//fibonacci series in c program use recursion function...

#include <stdio.h>

int f_call = 0;
int fibo[50];
int fibonacci(int n) {

    f_call += 1;
    if(fibo[n] != 0){
        return fibo[n];
    }

    if(n == 0 || n == 1 || n == 2){
        return fibo[n];
    }
    else{
        return fibo[n] = fibonacci(n -1) + fibonacci(n - 2);
    }

}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    fibo[0] = 0;
    fibo[1] = 1;
    fibo[2] = 1;

    if(n < 0){
        printf("Undefined! \n");
        return -1;
    }

    int fib = fibonacci(n);
    printf("%d fibonacci number is %d \n", n, fib);
    printf("Number of function calls: %d \n", f_call);

    for(n = 1; n <= 12; n++){
        printf("%d: %d \n", n, fibo[n]);
    }
return 0;
}

