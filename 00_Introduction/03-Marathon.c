#include <stdio.h>

int main() {
    // Define distance in miles
    int miles = 26, yards = 385;
    // Declare kilometers variable
    double kilometers;
    // Math
    kilometers = 1.609 * (miles + yards / 1760.0);
    // Print
    printf("\nA marathon is %lf kilometers.\n\n", kilometers);
    return 0;
}