//structure in c program...

#include <stdio.h>

struct student{
    int id;
    char name[30];
    char email[50];
};

int main() {
    struct student one;
    printf("Enter the value of id: ");
    scanf("%d", &one.id);

    printf("Enter the value of name: ");
    scanf("%s", one.name);

    printf("Enter the value of email: ");
    scanf("%s", one.email);

    printf("Id: %d \n", one.id);
    printf("Name: %s \n", one.name);
    printf("Email: %s \n", one.email);

return 0;
}

