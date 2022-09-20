//file read and write in c program.....

#include <stdio.h>

struct student{
   int sno;
   char sname [30];
   float marks;
   char temp;
};

int main () {
   struct student s[60];
   int i;
   FILE *fp;

   fp = fopen ("student1.txt", "w");
   for (i = 0; i < 2; i++){
      printf("enter details of student %d\n", i+1);
      printf("student number:");
      scanf("%d",&s[i].sno);
      scanf("%c",&s[i].temp);

      printf("student name:");
      gets(s[i].sname);

      printf("student marks:");
      scanf("%f",&s[i].marks);

      printf("\n");
      fwrite(&s[i], sizeof(s[i]),1,fp);
   }

   fclose (fp);
   printf("\n");

   fp = fopen ("student1.txt", "r");
   for (i = 0; i < 2; i++){
      printf ("details of student %d are\n", i+1);
      fread (&s[i], sizeof (s[i]) ,1,fp);
      printf("student number = %d\n", s[i]. sno);
      printf("student name = %s\n", s[i]. sname);
      printf("marks = %f\n", s[i]. marks);
      printf("\n");
   }

   fclose(fp);

return 0;
}
