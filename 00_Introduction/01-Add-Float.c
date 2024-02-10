#include <stdio.h>

int main(){
    // Declare float variables
    float a, b, c, sum;
    // Print
    printf("Enter Three Numbers: ");
    // User input
    scanf("%f%f%f", &a, &b, &c);
    // Print Numbers
    printf("a = %f, b = %f, c = %f\n", a, b, c);
    // Sum the numbers
    sum = a+b+c;
    // Print the sum
    printf("Sum = %f", sum);
    // End program
    return 0;
}