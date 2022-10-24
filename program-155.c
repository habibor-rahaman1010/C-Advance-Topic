//binary search in c program....

#include <stdio.h>
#include <stdlib.h>

int compare_func(const void *x, const void *y) {
    return (*(int *) x - *(int *) y);
}

int main() {
    int key, i, *item, n = 10;
    int numbers[] = {12, 23, 34, 45, 57, 67, 75, 79, 87, 88};

    //this is pointer  function prototype...
    int (*compare) (const void *, const void *);
    compare = &compare_func;

    while(1){
        printf("Enter the value of key (0 to exit): ");
        scanf("%d", &key);
        if(key == 0){
            break;
        }
        else{
            item = (int *) bsearch(&key, numbers, n, sizeof(int), compare);
            if(item != NULL){
                printf("Item found: %d \n", *item);
            }
            else{
                printf("Item not found in array \n");
            }
        }
    }



return 0;
}
