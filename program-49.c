// 2 number summation in c program....

#include <stdio.h>
int main() {
    FILE *fp_in, *fp_out;
    char *file_input = "in.txt";
    char *file_out = "out.txt";

    int num1, num2, sum;

    fp_in = fopen(file_input, "r");
    fp_out = fopen(file_out, "w");

    fscanf(fp_in, "%d", &num1);
    fscanf(fp_in, "%d", &num2);
    sum = num1 + num2;

    printf("%d %d = %d", num1, num2, sum);
    fprintf(fp_out, "%d \n", sum);

    fclose(fp_in);
    fclose(fp_out);

return 0;
}
