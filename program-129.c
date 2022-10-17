//structur in c program...

#include <stdio.h>

struct full_name{
    char first_name[20];
    char last_name[20];
};

struct get_address{
    char home_address[30];
    int road_no;
    char city[20];
    char country[20];
};

struct student_info{
    int id;
    struct full_name name;
    char email[40];
    int age;
    long int phone;
    struct get_address address;
};

int main() {
    struct student_info student[1];
    int i, n = 1;

    for(i = 0; i < n; i++){
        printf("Enter the value of id: ");
        scanf("%d", &student[i].id);

        printf("Enter the value of fast name: ");
        scanf("%s", student[i].name.first_name);

        printf("Enter the value of last name: ");
        scanf("%s", student[i].name.last_name);

        printf("Enter the value of email: ");
        scanf("%s", student[i].email);

        printf("Enter the value of age: ");
        scanf("%d", &student[i].age);

        printf("Enter the value of phone: ");
        scanf("%ld", &student[i].phone);

        printf("Enter the value of home address: ");
        scanf("%s", student[i].address.home_address);

        printf("Enter the value of home road no: ");
        scanf("%d", &student[i].address.road_no);

        printf("Enter the value of city: ");
        scanf("%s", student[i].address.city);

        printf("Enter the value of country: ");
        scanf("%s", student[i].address.country);
        printf("\n");
    }

     for(i = 0; i < n; i++){
        printf("ID: %d \n", student[i].id);
        printf("Name: %s %s \n", student[i].name.first_name, student[i].name.last_name);
        printf("Email: %s \n", student[i].email);
        printf("Age: %d \n", student[i].age);
        printf("Phone: %ld \n", student[i].phone);
        printf("Address: %s \n", student[i].address.home_address);
        printf("Road no: %d \n", student[i].address.road_no);
        printf("City: %s \n", student[i].address.city);
        printf("Country: %s \n", student[i].address.country);
        printf("\n");
    }


return 0;
}
