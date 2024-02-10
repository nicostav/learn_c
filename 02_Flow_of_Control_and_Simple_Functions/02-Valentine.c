#include <stdio.h>

int main(){
    // Define variable
    int repeat = 0;
    // User input
    printf("How strong is your love 0-10: ");
    scanf("%d", &repeat);
    //Loop
    printf("I love you\n");
    while (repeat > 0)
    {
        printf("very\n");
        repeat--;
    }
    printf("much");
    return 0;
}