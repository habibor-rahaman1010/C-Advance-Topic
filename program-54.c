//working on image file in c program....

#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *fp_in, *fp_out;
    char file_input[] = "neture2.jpg";
    char file_output[] = "neture1.jpg";
    int ch;

    fp_in = fopen(file_input, "rb");

    if(fp_in == NULL){
        perror("File opening failed");
        return EXIT_FAILURE;
    }
    else{
        fp_out = fopen(file_output, "wb");

        if(fp_in == NULL){
            perror("File opening failed");
            return EXIT_FAILURE;
        }
        else{
            while(1){
                ch = fgetc(fp_in);
                if(ch == EOF){
                    break;
                }
                else{
                    fputc(ch, fp_out);
                }
            }
        }
    }

    fclose(fp_in);
    fclose(fp_out);

return 0;
}
