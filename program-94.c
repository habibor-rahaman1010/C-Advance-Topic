//write a program which sum 1 to n number use in c program...

#include <stdio.h>

int call_function = 0;
int sumNnumber(int n) {
    call_function += 1;
    if(n != 0){
        return n + sumNnumber(n - 1);
    }
    else{
        return n;
    }

}

int main() {
    int n;
    printf("Enter the n number: ");
    scanf("%d", &n);
    int summation = sumNnumber(n);
    printf("Summation is: %d \n", summation);
    printf("Number of function calls: %d \n", call_function);
return 0;
}
