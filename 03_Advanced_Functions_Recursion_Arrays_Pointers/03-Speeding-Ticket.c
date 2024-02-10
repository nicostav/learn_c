#include <stdio.h>

int main(){
    // Declare speed variable
    int speed;
    //User input
    printf("Enter your speed: ");
    scanf("%d", &speed);
    // Check input
    speed = (speed <= 50)? (50) : (speed <= 80)? (80) : (100);
    // Switch input
    switch (speed)
    {
    case 50:
        printf("No ticket");
        break;
    case 80:
        printf("Small ticket");
        break;
    case 100:
        printf("Big ticket");
        break;
    default:
        break;
    }
    return 0;
}