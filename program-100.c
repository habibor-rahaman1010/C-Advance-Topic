//right shift operator in c program...

#include <stdio.h>
int main() {
    int n, x, m;

    while(1){
        printf("Please enter your number: (0 to exit): ");
        scanf("%d", &n);
        if(n == 0){
             break;
        }
        else{
            printf("How many bits you want to shift left? ");
            scanf("%d", &x);
            m = n >> x;
            printf("Result is: %d \n", m);
        }
    }

return 0;
}

