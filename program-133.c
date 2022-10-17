//create a national id card use structure in c program...
#include <stdio.h>

typedef struct {
    char first[20];
    char last[20];
}FullName;

typedef struct {
    char first[20];
    char last[20];
}getFatherName;

typedef struct {
    char first[20];
    char last[20];
}getMotherName;

typedef struct {
    int day;
    int month;
    int year;
}getDate;

typedef struct{
    FullName name;
    getFatherName fatherName;
    getMotherName motherName;
    getDate date;
    long long id_no;
}id_card;


int main() {
    id_card card[2];
    int i, n = 2;

    for(i = 0; i < n; i++){
        printf("Enter the first name for person %d: ", i + 1);
        scanf("%s", card[i].name.first);

        printf("Enter the last name for person %d: ", i + 1);
        scanf("%s", card[i].name.last);

        printf("Enter the first name for person father %d: ", i + 1);
        scanf("%s", card[i].fatherName.first);

        printf("Enter the last name for person father %d: ", i + 1);
        scanf("%s", card[i].fatherName.last);

        printf("Enter the first name for person mother %d: ", i + 1);
        scanf("%s", card[i].motherName.first);

        printf("Enter the last name for person mother %d: ", i + 1);
        scanf("%s", card[i].motherName.last);

        printf("Enter the birthday {Day} for person %d: ", i + 1);
        scanf("%d", &card[i].date.day);

        printf("Enter the birthday {Month} for person %d: ", i + 1);
        scanf("%d", &card[i].date.month);

        printf("Enter the birthday {Year} for person %d: ", i + 1);
        scanf("%d", &card[i].date.year);

        printf("Enter the id card no for person %d: ", i + 1);
        scanf("%lli", &card[i].id_no);
        printf("\n");
    }

    //id card data print here...
    for(i = 0; i < n; i++){
        printf("Name: %s %s \n", card[i].name.first, card[i].name.last);
        printf("Father Name: %s %s \n", card[i].fatherName.first, card[i].fatherName.last);
        printf("Mother Name: %s %s \n", card[i].motherName.first, card[i].motherName.last);
        printf("Date of Birth: %d/%d/%d \n", card[i].date.day, card[i].date.month, card[i].date.year);
        printf("ID NO: %lli \n", card[i].id_no);
        printf("\n \n");
    }

return 0;
}
