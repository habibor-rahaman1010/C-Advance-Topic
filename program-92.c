//fibonacci series in c program use recursion function...

#include <stdio.h>

int f_call = 0;
int fibonacci(int n) {

    f_call += 1;

    if(n == 0 || n == 1 || n == 2){
        return 1;
    }
    else{
        return fibonacci(n -1) + fibonacci(n - 2);
    }

}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if(n < 0){
        printf("Undefined! \n");
        return -1;
    }

    int fib = fibonacci(n);
    printf("%d fibonacci number is %d \n", n, fib);
    printf("Number of function calls: %d \n", f_call);
return 0;
}
