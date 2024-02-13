#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 
//#define MAX_ELEPHANT_SEAL_WEIGHT 8800
#define MIN_ELEPHANT_SEAL_WEIGHT 4400

// Produce marco that randomly generates a weight
#define RANGE 4400
#define POPULATION 1000
// Create random number within RANGE of 0-4400
#define WEIGHT_OVER rand()%RANGE
// Macro to get random weight
#define WEIGHT WEIGHT_OVER + MIN_ELEPHANT_SEAL_WEIGHT
// Get random weight for full population
#define FILL for (int i = 0; i < POPULATION; i++) \
                    data[i] = WEIGHT

// Print data from array
void print_data(int d[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", d[i]);
        if ((i+1) % 10 == 0)
        {
            printf("\n");
        }
    }
}

int main(){
    int data[POPULATION];
    // Reset seed of random number generator with system clock
    srand(time(0));
    // Fill array with data
    FILL;
    print_data(data, POPULATION);
    printf("\n");
    return 0;
}
