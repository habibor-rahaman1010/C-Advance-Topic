//file write in c program....

#include <stdio.h>
int main() {
    FILE *file_pointer;
    char file_name[] = "document3.txt";

    file_pointer = fopen(file_name, "w");

    fprintf(file_pointer, "Hello programmer, how can i help you? \n");
    fprintf(file_pointer, "Habibor always push yourself everyday. \n");

    fclose(file_pointer);

    file_pointer = fopen(file_name, "a");
    fprintf(file_pointer, "Always give your 100 percent unless you are blood donating.");

    fclose(file_pointer);
return 0;
}

