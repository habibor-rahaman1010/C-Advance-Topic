//print 10 student number in file use c program...
#include <stdio.h>
int main() {
    FILE *fp;
    char fileName[] = "math.txt";
    int i;
    int num[10] = {78, 87, 56, 43, 67, 89, 65, 98, 72, 100};
    int roll[10] = {7, 9, 1, 6, 11, 13, 19, 20, 2, 10};

    fp = fopen(fileName, "w");
    for(i = 0; i < 10; i++){
        fprintf(fp, "Roll %d: %d \n", roll[i], num[i]);
    }

    fclose(fp);

return 0;
}
