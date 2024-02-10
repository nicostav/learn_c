#include <stdio.h>
#include <math.h>

int main() {
    // Define variables
    double sineInput, result;
    // Print
    printf("Input a number to get the sine of:");
    // User input
    scanf("%lf", &sineInput);
    // Validate input
    if (sineInput > 0 && sineInput < 1){
        // Math
        result = sin(sineInput);
        // Print result
        printf("sin(%.2lf) = %lf\n", sineInput, result);
        // End program
        return 0;
    } else {
        printf("Enter a number between 0 and 1");
    }
}
