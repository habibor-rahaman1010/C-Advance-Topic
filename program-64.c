//file remove use in c program...

#include <stdio.h>
int main() {
    int return_value;
    char *fileName = "example.txt";
    return_value = remove(fileName);

    if(return_value != 0){
        perror("File remove failed");
        return 1;
    }
    else{
        printf("%s remove successfully \n", fileName);
    }


return 0;
}
