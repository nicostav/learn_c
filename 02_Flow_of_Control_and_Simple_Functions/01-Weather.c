#include <stdio.h>

int main(){
    // Declare variables
    int outside, weather;
    // Print
    printf("Are you outside 1 or inside 0: ");
    // User input
    scanf("%d", &outside);
    // Print
    printf("Is it raining 1 or sunny 0: ");
    // User input
    scanf("%d", &weather);
    // Check
    if (outside && weather){
        printf("Take an umbrella");
    } else {
        printf("Dress normaly");
    }
    // End program
    return 0;
}