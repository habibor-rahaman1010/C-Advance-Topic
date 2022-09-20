//find out how size of file use in c program....

#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *fp_in;
    char file_name[] = "neture1.jpg";
    fp_in = fopen(file_name, "r");

    if(fp_in == NULL){
        perror("oops! cant't read the file.");
        return EXIT_FAILURE;
    }
    else{
        fseek(fp_in, 0, SEEK_END);
        printf("File size: %ld bytes \n", ftell(fp_in));
        printf("File size (kilo byte): %ld \n", ftell(fp_in) / 1024);
    }
    fclose(fp_in);

return 0;
}
