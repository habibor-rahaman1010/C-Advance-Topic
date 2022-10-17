//structure in c program...

#include <stdio.h>
int main() {

    struct student{
        int id;
        char *name;
    };

    struct student std;
    std.id = 1;
    std.name = "Habibor Rahaman";

    printf("Id: %d \n", std.id);
    printf("Name: %s \n", std.name);

return 0;
}
