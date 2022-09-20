//file read in c program....

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char file_name[] = "character.txt";
    int ch;
    fp = fopen(file_name, "r");

    if(fp == NULL){
        perror("cant't open file!");
        return EXIT_FAILURE;
    }
    else{
        ch = fgetc(fp);
        printf("%c \n", (char) ch);

        ch = fgetc(fp);
        printf("%c \n", (char) ch);

        fseek(fp, sizeof(char) * 3, SEEK_CUR);
        ch = fgetc(fp);
        printf("%c \n", (char) ch);
    }

    fclose(fp);

return 0;
}



