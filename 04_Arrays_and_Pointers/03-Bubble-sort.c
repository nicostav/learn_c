#include <stdio.h>

#define SIZE 5

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_array(int how_many, int data[], char *str){
    printf("%s", str);
    for (int i = 0; i < how_many; i++)
    {
        printf("%d\t", data[i]);
    }
}

void bubble(int data[], int how_many){
    int go_on;
    for (int i = 0; i < how_many; i++)
    {
        print_array(how_many, data, "\ninside bubble\n");
        printf("\ni = %d, input any int to continue: ", i);
        scanf("%d", &go_on);
        for (int j = how_many -1; j > i; j--)
        {
            if (data[j-1] > data[j])
            {
                swap(&data[j-1], &data[j]);
            }
        }   
    }
}

int main(){
    int grades[SIZE] = {156, 45, 64, 1, 98};
    print_array(SIZE, grades, "My grades\n");
    printf("\n\n");
    bubble(grades, SIZE);
    print_array(SIZE, grades, "My sorted grades\n");
    printf("\n\n");
    return 0;
}