#include<stdio.h>
#define PI 3.14159
int main(void)
{ 
    int radius;
    printf("Enter radius:");
    scanf("%d", &radius);
    printf("volume is : %lf \n\n", PI*(radius*radius*radius)*4/3);
    return 0;
}