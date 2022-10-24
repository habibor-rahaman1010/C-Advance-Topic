//student number store use dynamic memory allocation in c program...

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arra[5], num[5];
    int i, j, n;

    for(i = 0; i < 5; i++){
        printf("Enter the number of students for class %d: ", i + 1);
        scanf("%d", &n);
        num[i] = n;
        arra[i] = (int *) malloc(sizeof(int) * n);
        if(arra[i] == NULL){
            printf("Memory allocation failed! \n");
            return 1;
        }
        else{
            for(j = 0; j < n; j++){
                printf("Enter marks for student %d: ", j + 1);
                scanf("%d", &arra[i][j]);
            }
        }
    }

    // now print the result...
    printf("Output \n");
    for(i = 0; i < 5; i++){
        printf("Class %d: ", i + 1);
        for(j = 0; j < num[i]; j++){
            printf("%d  ", arra[i][j]);
        }
        printf("\n");
    }

    //memory free...
    free(*arra);

return 0;
}
