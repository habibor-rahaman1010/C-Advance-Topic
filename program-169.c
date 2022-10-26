// switch case in c program..

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    switch(n){
    case 1:
        printf("One item \n");
        break;

    case 2:
        printf("Two items \n");
        break;

    default:
        printf("Many items \n");
    }

return 0;
}
