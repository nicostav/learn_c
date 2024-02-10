#include <stdio.h>
#include <math.h>

// Function to print sin and cosine of number
void sine_cosine_table(double number){
    // Print sine and cosine values
    printf("sin( %.2lf ) = %lf , cos( %.2lf ) = %lf\n", number, sin(number),number , cos(number));
}

int main(){
    // Define counter variable
    double count = 0;
    double steps = 0.1;
    // User input
    printf("Steps to iterate (0.1,0.01,0.2,0.02): ");
    scanf("%lf", &steps);
    printf("\n");
    // Loop
    while (count <= 1.0)
    {
        // Use defined function
        sine_cosine_table(count);
        // Increase count by set amount
        count = count + steps;
    }
    // End program
    return 0;
}