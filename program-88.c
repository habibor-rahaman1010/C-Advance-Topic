//recursion in c program...

#include<stdio.h>

int factorial(int num)
{
    if(num <= 1)
        return 1;

    return num * factorial(num - 1);
}

int main()
{
    int n, f;

    printf("Enter a number: ");
    scanf("%d", &n);

    f = factorial(n);

    printf("Value of factorial %d! is: %d\n", n, f);

    return 0;
}
