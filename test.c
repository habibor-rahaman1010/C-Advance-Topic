#include <stdio.h>

int main() {
	int a, b, c;
	printf("Enter the value of (a, b, c): ");
	scanf("%d %d %d", &a, &b, &c);

	if(a > b && a > c){
	    printf("a = %d is big \n", a);
	}
	else if(b > a && b > c){
	    printf("b = %d is big \n", b);
	}
	else{
	    printf("c = %d is big \n", c);
	}

	

return 0;
}
