#include <stdio.h>

// Define a immutable variable, name is always CAPS-LOCK
#define PI 3.14159

int main() {
    // Define double values
    double area = 0.0, radius = 0.0;
    // Print
    printf("Enter radius: ");
    // User input radius
    scanf("%lf", &radius);
    // Math
    area = PI * radius * radius;
    // Print
    printf("radius = %lf, area = %lf", radius, area);
    // End program
    return 0;
}