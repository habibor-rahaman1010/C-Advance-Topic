//print 10 student number in file use c program...
#include <stdio.h>
int main() {
    FILE *fp;
    char fileName[] = "result.txt";
    int i;
    int math[10] = {78, 87, 56, 43, 67, 89, 65, 98, 72, 100};
    int bangla[10] = {67, 89, 65, 98, 72, 100, 78, 87, 56, 43, };
    int english[10] = {65, 98, 72, 100, 78, 87, 56, 43, 67, 89,};
    int roll[10] = {7, 9, 1, 6, 11, 13, 19, 20, 2, 10};

    fp = fopen(fileName, "w");
    for(i = 0; i < 10; i++){
        fprintf(fp, "Roll %d: math = %d, bangla = %d, english = %d \n", roll[i], math[i], bangla[i], english[i]);
    }

    fclose(fp);

return 0;
}

