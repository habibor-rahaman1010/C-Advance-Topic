//student number store use dynamic memory allocation in c program...

#include <stdio.h>

int main() {
    int **arra, num[12];
    int i, j, total_calsses, n;

    printf("Enter the total number of classes: ");
    scanf("%d", &total_calsses);
    arra = (int **) malloc(sizeof(int *) * total_calsses);
    if(arra == NULL){
        printf("Memory allocated failed!");
        return 1;
    }
    else{
        for(i = 0; i < total_calsses; i++){
            printf("Enter the number of students for class %d: ", i + 1);
            scanf("%d", &n);
            num[i] = n;
            arra[i] = (int *) malloc(sizeof(int) * n);
            if(arra[i] == NULL){
                printf("Memory allocated failed!");
                return 1;
            }
            else{
                for(j = 0; j < n; j++){
                    printf("Enter marks for student %d: ", j + 1);
                    scanf("%d", &arra[i][j]);
                }
            }
        }
    }

    // now print the results...
    printf("Output \n");
    for(i = 0; i < total_calsses; i++){
        printf("Classes %d: ", i + 1);
        for(j = 0; j < num[i]; j++){
            printf("%d  ", arra[i][j]);
        }
        printf("\n");
    }

    // Memory freed...
    free(**arra);


return 0;
}
