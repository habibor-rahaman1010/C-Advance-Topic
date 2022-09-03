//ASCII value in c program...
#include <stdio.h>

int ASCII() {
    for(int i = 32; i <= 127; i++){
        printf("ASCII code for %c is %d \n", i, i);
    }
}


int main() {
   ASCII();

return 0;
}
