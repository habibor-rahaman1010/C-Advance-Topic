// typedef in c program...

#include <stdio.h>

typedef int * ip;
typedef int arr100[100];
typedef int (*fp) (int, int);

int main(int argc, char *argv[]) {

    ip a, b, c; // a, b, c are integer pointer...

    arr100 p, q; // p, q both are 100 integer array..

    fp f1, f2; //f1 f2 both are pointers to function
               // which take tow integer and return an integer....

return 0;
}


