//print to small letter to capital letter in c program...

#include <stdio.h>

int main() {
    char small_letter, capital_letter;
    printf("Enter the value of small letter: ");

    small_letter = getchar();
    capital_letter = small_letter - 32;
    printf("Capital letter is: %c", capital_letter);

}
