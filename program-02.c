//ASCII value print out in c program...
#include <stdio.h>

int main() {
    int i;
    for(i = 32; i <= 127; i++){
        printf("ASCII code for %c is %d \n", i, i);
    }

return 0;
}
