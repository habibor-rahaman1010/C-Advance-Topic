//bit wise and operator in c program...

#include <stdio.h>
int main() {
    int n1, n2, n3;
    while(1){
        printf("Enter the value of n1: ");
        scanf("%d", &n1);

        if(n1 == 0){
            break;
        }

        printf("Enter the value of n2: ");
        scanf("%d", &n2);

        if(n1 == 0){
            break;
        }
        else{
            n3 = n1 | n2;
            printf("%d & %d = %d \n", n1, n2, n3);
        }
    }

return 0;
}


