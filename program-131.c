//pass by value and pass bye reference in c program...

#include <stdio.h>

void pass_by_value(int a) {
    a = a + 10;
}

void pass_by_reference(int *a) {
    *a = *a + 10;
    //*a = (*a) + 10; // same thing...
}

int main() {
    int a;
    a = 5;

    pass_by_value(a);
    printf("a = %d \n", a);

    pass_by_reference(&a);
    printf("a = %d", a);

return 0;
}
