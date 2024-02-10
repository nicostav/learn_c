#include <stdio.h>

int main() {
    // Declare variables
    int fahrenheit, celsius;
    // Print
    printf("Enter fahrenheit as an integer:");
    // User input
    scanf("%d", &fahrenheit);
    // Math
    celsius = (fahrenheit - 32)/1.8;
    // Print
    printf("\n%d fahrenheit is %d celsius", fahrenheit, celsius);
    // End program
    return 0;
}