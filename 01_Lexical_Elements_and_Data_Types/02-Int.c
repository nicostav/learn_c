#include <stdio.h>

int main() {
    // Short int
    short short_int = 5;
    // Normal int
    int normal_int = 67;
    // Unsigned int
    unsigned unsigned_int = 67u;
    // Long int
    long long_int = 67l;
    // Math
    printf("short_int = %hd, divide by int 2 is %d\n", short_int, short_int/2);
    printf("short_int = %hd, divided by float 2 is %lf\n", short_int, short_int/2.0);
    printf("67 as a char is %c\n", normal_int);
    printf("sizes in bytes of short, int , unsigned and long on my machine:\n");
    printf("%lu , %lu , %lu , %lu\n", sizeof(short_int), sizeof(normal_int), sizeof(unsigned_int), sizeof(long_int));
    return 0;
}