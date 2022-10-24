//function pointer in function in c program...

#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int operation(int (*op) (int, int), int a, int b) {
    return op(a, b);
}


int main() {
    int a, b;
    printf("Enter the value of (a and b): ");
    scanf("%d %d", &a, &b);

    int result1 = operation(&sum, a, b);
    printf("Sum is: %d \n", result1);

    int result2 = operation(&sub, a, b);
    printf("Sub is: %d \n", result2);


return 0;
}
