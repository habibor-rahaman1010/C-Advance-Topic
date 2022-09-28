//capital latter to small later and small latter to capital latter in  c program...

#include <stdio.h>

char to_upper(char ch) {
    return ch & 95;
}

char to_lower(char ch) {
    return ch | 32;
}

int main() {
    char *str = "AbCdEfGhIjKlMnOPQrStUvWxYz";
    //char str[26] = "AbCdEfGhIjKlMnOPQrStUvWxYz";

    for(int i = 0; i < 26; i++){
        printf("Upper case: %d \n", to_upper(str[i]));
        printf("Lower case: %d \n", to_lower(str[i]));
    }

return 0;
}
