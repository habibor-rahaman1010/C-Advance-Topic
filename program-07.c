//data type size in c program...

#include <stdio.h>

int main() {
    int num;
    char ch;
    double d_num;
    float f_num;

    printf("%lu \n", sizeof(int));
    printf("%lu \n", sizeof(num));
    printf("%lu \n", sizeof(ch));
    printf("%lu \n", sizeof(d_num));
    printf("%lu \n", sizeof(f_num));

return 0;
}
