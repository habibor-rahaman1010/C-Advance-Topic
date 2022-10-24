//function pointer in c program...

#include <stdio.h>

int biggNumber(int n1, int n2, int n3) {
    if(n1 > n2 && n1 > n3){
        return n1;
    }
    else if(n2 > n1 && n2 > n3){
        return n2;
    }
    else{
        return n3;
    }
}

int main() {
    int n1, n2, n3;
    printf("Enter the value of (n1, n2, n3): ");
    scanf("%d %d %d", &n1, &n2, &n3);

    int (*func)(int, int, int);
    func = &biggNumber;
    int result = func(n1, n2, n3);
    printf("The biggest number is: %d", result);

return 0;
}
