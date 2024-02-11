#include <stdio.h>

double square(double);
double cube(double);

int main(){
    //Declare variable
    int how_many;
    // User input
    printf("I want square and cube for 1 to n where n is: ");
    scanf("%d", &how_many);
    //Loop
    int k;
    for (int i = 1; i <= how_many; i++){
        printf("\n\nSquare and cube for %d-%d\n", i, k=i+1);
        for (int j = 0; j <= 10; j++){
            double math = i+(j/10.0);
            printf("square(%.2lf) = %.4lf m2 \t cube(%.2lf) = %.4lf m3\n", math, square(math), math, cube(math));
        }
    }
    return 0;
}

double square(double number){
    return (number * number);
}

double cube(double number){
    return (number * number * number);
}