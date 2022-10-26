//average in c program...

#include <stdio.h>

int add(int x, int y) {
    return (x + y);
}

int main() {
    int length, i, sum = 0, tmp;

    printf("Enter the value of length: ");
    scanf("%d", &length);

    for(i = 0; i < length; i++){
        printf("Enter number %d: ", i + 1);
        scanf("%d", &tmp);
        sum = add(sum, tmp);
    }
    printf("\n");
    printf("The average is: %.2lf \n", (double) sum / length);

return 0;
}
