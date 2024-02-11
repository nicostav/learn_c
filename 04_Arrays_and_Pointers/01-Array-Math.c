#include <stdio.h>

// Define SIZE for array lenght
#define SIZE 5

int main(void){
    // Create array
    int grades[SIZE] = {78, 67, 92, 83, 88};
    // Variable for math
    double sum = 0.0;
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
    printf("My average is %.2lf", sum/SIZE);
    return 0;    
}