//array sort big to small in c program...

#include <stdio.h>
#include <stdlib.h>

int compare_func(const void *x, const void *y) {
    return (*(int *) y - *(int *) x);
}

int main() {
    int i, n = 10;
    int numbers[] = {23, 43, 54, 32, 12, 54, 76, 87, 98, 100};

    //this is pointer function prototype....
    int (* compare) (const void *, const void *);
    compare = &compare_func;
    qsort(numbers, n, sizeof(int), compare);

    for(i = 0; i < n; i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");


return 0;
}
