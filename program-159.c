//random number in c program...

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int i;
    time_t t;

    srand((unsigned) time(&t));
    for(i = 0; i < 5; i++){

        printf("random number is: %d \n", rand() % 100);
    }

return 0;
}

