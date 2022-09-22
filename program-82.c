//recursion in c program use function scope static variable....

#include <stdio.h>

void recursion() {
    static int count = 1;
    if(count > 10){
        return;
    }
    else{
        printf("Count = %d \n", count);
        count = count += 1;
        recursion();
    }

}

int main() {
    recursion();

return 0;
}

