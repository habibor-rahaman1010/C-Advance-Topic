//structure in c program...

#include <stdio.h>
#include <string.h>
int main() {

    struct student{
        int id;
        char name[30];
    };

    struct student std;
    std.id = 1;
    strcpy(std.name, "Habibor Rahaman");

    printf("Id: %d \n", std.id);
    printf("Name: %s \n", std.name);

return 0;
}

