//dynamic memory allocation in c program...

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *marks;
    int i, n;
    printf("please enter the number of students: ");
    scanf("%d", &n);

    //now allocate memory
    marks = (int *) calloc(n, sizeof(int));
    if(marks == NULL){
        printf("Memory allocation filed for marks!");
        return 1;
    }
    else{
        printf("Enter the marks for each student: ");
        for(i = 0; i < n; i++){
            scanf("%d", &marks[i]);
        }

        printf("\n");
        printf("Now here you can see the value: \n");
        for(i = 0; i < n; i++){
            printf("%d \n", marks[i]);
        }
    }
    //now free the memory...
    free(marks);

return 0;
}
