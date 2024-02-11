#include <stdio.h>

#define SIZE 5

// Function to print array
void print_array(int how_many, int data[], char *str){
    printf("%s", str);
    for (int i = 0; i < how_many; i++)
    {
        printf("%d\t", data[i]);
    }
}

// Function to merge two arrays
void merge(int a[], int b[], int c[], int how_many){
    int i = 0, j = 0, k = 0;
    // Check if both arrays has untouched positions left
    while (i < how_many && j < how_many)
    {
        // If number in array a is smaller than b add to array c else add b to c
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        } 
        else{
            c[k++] = b[j++];
        }
    }
    printf("\nArray a = %d\t Array b = %d\n", i, j);
    // Check if array a has positions left
    while (i < how_many)
    {
        // Add to array c
        printf("\nA was smaller");
        c[k++] = a[i++];
    }
    // Check if array b has positions left
    while (j < how_many)
    {
        // Add to array c
        printf("\nB was smaller");
        c[k++] = b[j++];
    }
}

int main(){
    int a[SIZE] = {12, 52, 87, 101, 200};
    int b[SIZE] = {1, 32, 49, 88, 500};
    int c[2*SIZE];
    print_array(SIZE, a, "\nArray A unsorted:\n");
    print_array(SIZE, b, "\nArray B unsorted:\n");
    merge(a, b, c, SIZE);
    print_array(2*SIZE, c, "\nArray C sorted\n");
    return 0;
}