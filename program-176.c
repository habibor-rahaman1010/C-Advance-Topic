//average in c program...

#include <stdio.h>
#include <stdlib.h>

int add(int x, int y) {
    return (x + y);
}

int main() {
    int length, i, sum = 0, *array;

    printf("Enter the value of length: ");
    scanf("%d", &length);
    array = (int *) malloc(sizeof(int) * length);

    for(i = 0; i < length; i++){
        printf("Enter number %d: ", i + 1);
        scanf("%d", &array[i]);
        sum = add(sum, array[i]);
    }
    printf("\n");
    printf("The average is: %.2lf \n", (double) sum / length);

return 0;
}

