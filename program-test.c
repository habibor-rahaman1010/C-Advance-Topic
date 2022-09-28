#include <stdio.h>

int main() {
    int arr[] = {2, 3, 4, 7, 6, 2, 4, 6, 3};
    int result, i, n = 9;
    result = arr[0];

    for(i = 1; i < n; i++) {
        result = result ^ arr[i];
    }
    printf("Result: %d \n", result);

return 0;
}

