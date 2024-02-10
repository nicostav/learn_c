#include <stdio.h>

int main () {
    // Print
    printf("On my system:\n");
    // Int size
    printf("int is %lu bytes\n", sizeof(int));
    // Long int size
    printf("long int is %lu bytes\n", sizeof(long int));
    // char size
    printf("char is %lu bytes\n", sizeof(char));
    // float size
    printf("float is %lu bytes\n", sizeof(float));
    // double size
    printf("double is %lu bytes\n", sizeof(double));
    // long double size
    printf("long double is %lu bytes\n", sizeof(long double));
    return 0;
}