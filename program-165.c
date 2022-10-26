//enum in c program...

#include <stdio.h>

enum COLOR {RED, BLUE, GREEN};

int main() {
    int num;
    enum COLOR select_color;

    printf("Enter the 1 for RED 2 for BLUE 3 GREEN: ");
    scanf("%d", &num);

    if(num == 1){
        select_color = RED;
    }
    else if(num == 2){
        select_color = BLUE;
    }
    else if(num == 3){
        select_color = GREEN;
    }

    printf("select_color: %d \n", select_color);

return 0;
}
