#include <stdio.h>

// Define SIZE for array lenght
#define SIZE 5

int main(void){
    // Create array
    int grades[SIZE] = {78, 67, 92, 83, 88};
    // Variable for math
    double sum = 0.0;
    // Variable for pointer
    double *pointer_to_sum = &sum;
    // Variable for loop
    //int i;
    //Print
    printf("Grades are: \n");
    // Loop
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\n", grades[i]);
    }
    for (int i = 0; i < SIZE; i++)
    {
        sum = sum + grades[i];
    }
    printf("My average is %.2lf\n", sum/SIZE);
    printf("Stored at %p or %lu and is %lf\n", pointer_to_sum, pointer_to_sum, *pointer_to_sum);
    printf("Grades are at %p or %lu to %lu", grades, grades, grades + 5);
    return 0;    
}