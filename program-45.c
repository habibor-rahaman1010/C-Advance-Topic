//file write in c program....

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[] = "document.txt";

    fp = fopen(filename, "w");
    fprintf(fp, "This file created by my program! \n");
    fprintf(fp, "I am so happy.");

    fclose(fp);

return 0;
}
