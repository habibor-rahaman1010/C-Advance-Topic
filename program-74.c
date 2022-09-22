//recursion in c program...

#include <stdio.h>

void recursion(int count) {
    if(count == 5){
        return;
    }
    else{
        printf("You are genius programmer in this world! \n");
        recursion(count + 1);
        return;
    }
}

int main() {
    recursion(1);

return 0;
}
