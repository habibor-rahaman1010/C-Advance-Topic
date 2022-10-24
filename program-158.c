//random number in c program...

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    for(i = 0; i < 5; i++){
        printf("random number is: %d \n", rand() % 100);
    }

return 0;
}
