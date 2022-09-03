//variable memory address in c program..

#include <stdio.h>

int main() {
    char ch1 = 'H', ch2 = 'K';
    int n1 = 12, n2 = 14;

    printf("value of ch1 = %c, \t", ch1);
    printf("Address of ch1 = %p \n", &ch1);

    printf("value of ch2 = %c, \t", ch2);
    printf("Address of ch2 = %p \n", &ch2);

    printf("value of n1 = %d, \t", n1);
    printf("Address of n1 = %p \n", &n1);

    printf("value of n2 = %d, \t", n2);
    printf("Address of n2 = %p \n", &n2);

return 0;
}
