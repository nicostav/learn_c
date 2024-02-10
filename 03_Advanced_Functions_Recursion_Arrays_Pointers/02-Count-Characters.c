#include <stdio.h>

int main(){
    // Define variables
    int blanks = 0, digits = 0, total_characters = 0;
    // Use for ascii int value of character
    int c;
    for (; (c = getchar()) != EOF; total_characters++)
    {
        if (c == ' ')
        {
            blanks++;
        } else if (c >= '0' && c <= '9')
        {
            digits++;
        }
    }
    printf("blanks = %d, digits = %d, total characters = %d", blanks, digits, total_characters);
    return 0;
    
}