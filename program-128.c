//stuctur in c program...

#include <stdio.h>

struct fullName{
    char fast[20];
    char last[20];
};

struct student{
    int id;
    struct fullName name;
    char email[40];
    long int number;
};

int main() {
    struct student one;
    printf("Enter the value of id: ");
    scanf("%d", &one.id);

    printf("Enter the value of fast name: ");
    scanf("%s", one.name.fast);

    printf("Enter the value of last name: ");
    scanf("%s", one.name.last);

    printf("Enter the value of email: ");
    scanf("%s", one.email);

    printf("Enter the value of number: ");
    scanf("%ld", &one.number);
    printf("\n");

    printf("ID: %d \n", one.id);
    printf("Name: %s %s \n", one.name.fast, one.name.last);
    printf("Email: %s \n", one.email);
    printf("Phone: %ld \n", one.number);

return 0;
}
