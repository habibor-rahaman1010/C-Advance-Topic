//work at binary file in c program...

#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *fp_in, *fp_out;
    char *input_file = "space.jpg";
    char *output_file = "coffee.jpg";
    int ch;

    fp_in = fopen(input_file, "rb");
    if(fp_in == NULL){
        perror("File opening failed");
        return EXIT_FAILURE;
    }
    else{
        fp_out = fopen(output_file, "wb");
        if(fp_out == NULL){
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
