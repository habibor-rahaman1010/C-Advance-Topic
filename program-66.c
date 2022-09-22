//array length find out in c program...

#include <stdio.h>

int arrLength(int arr2[], int size) {
    int len = size / sizeof(arr2[0]);
    printf("Function inside array length: %d \n", len);

return 0;
}

int main() {
    int arr[] = {32, 45, 65, 78, 88};
    arrLength(arr, sizeof(arr));
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("Inside array length: %d \n", len);

return 0;
}
