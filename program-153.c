// array sort in c program...

#include <stdio.h>
#include <stdlib.h>

int compare_func(const void *x, const void *y) {
    return (*(int *) x - *(int *) y);
}


int main() {
    int i, n = 10;
    int number[] = {99, 67, 43, 98, 78, 56, 65, 87, 92, 75};

    //this is function pointer prototype..
    int (*compare) (const void *, const void *);
    compare = &compare_func;
    qsort(number, n, sizeof(int), compare);

    for(i = 0; i < n; i++){
        printf("%d ", number[i]);
    }
    printf("\n");

return 0;
}
