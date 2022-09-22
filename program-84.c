//recursion in c program...

#include <stdio.h>

int count = 1;

void sayDog(char *talk) {
    sayMew(talk);
}

void sayMew(char *talk) {
    sayFox(talk);
}

void sayFox(char *talk) {
    if(count == 6){
        return;
    }
    else{
        printf("%s \n", talk);
        count = count + 1;
        sayDog(talk);
    }
}


int main() {
    char *talk = "Hello friend's how are you from Dog!";
    sayDog(talk);

return 0;
}
