//memory alignment of structure in c program....
#include <stdio.h>

struct s1 {
    int n;
    double d;
    char c;
};

struct s2 {
    char c;
    int n;
    double d;
};

struct s3 {
    int  n;
    char x;
    char y;
    char z;
    char s;
    double d;
};

struct s4 {
    int  n;
    char x;
    char y;
    char z;
    char s;
    char v;
    double d;
};

struct s5 {
    char c;
    int  x;
    char y;
    double z;
    char s;
    char v;
};

int main() {
    printf("char size: %lu bytes \n", sizeof(char));
    printf("int size: %lu bytes \n", sizeof(int));
    printf("double size: %lu \n", sizeof(double));

    printf("s1 size: %lu \n", sizeof(struct s1));
    printf("s2 size: %lu \n", sizeof(struct s2));
    printf("s3 size: %lu \n", sizeof(struct s3));
    printf("s4 size: %lu \n", sizeof(struct s4));
    printf("s4 size: %lu \n", sizeof(struct s5));

return 0;
}
