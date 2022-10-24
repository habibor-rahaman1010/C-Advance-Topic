//function pointer in c program....

#include <stdio.h>

int add(int n1, int n2) {
    return n1 + n2;
}

int sub(int n1, int n2) {
    return n1 - n2;
}

int main() {
    int n1 = 10, n2 = 5;

    int (*func)(int , int);
    func = &add;

    printf("Result: %d \n", func(n1, n2));

    func = &sub;
    printf("Result: %d \n", func(n1, n2));

return 0;
}
