#include <stdio.h>

// Custom data type day
enum day {monday, tuesday, wednesday, thursday, friday, saturday, sunday};
// Defines the custom type day and allows use without enum all the time
typedef enum day day;

// print weekday
void print_day(enum day d){
    switch (d)
    {
    case monday:
        printf(" monday ");
        break;
    case tuesday:
        printf(" tuesday ");
        break;
    case wednesday:
        printf(" wednesday ");
        break;  
    case thursday:
        printf(" thursday ");
        break;
    case friday:
        printf(" friday ");
        break;
    case saturday:
        printf(" saturday ");
        break;
    case sunday:
        printf(" sunday ");
        break;
    default:
        printf("Error");
        break;
    }
}

enum day next_day(enum day d){
    // Current day plus 1 - Sunday is 6 7 does not exist use modulo to get monday
    return(d+1%7);
}

int main(){
    enum day today = friday;
    // Print day today
    print_day(today);
    printf("\n\n");
    // Create error because outside of range 0-6
    print_day(7);
    printf("\n\n");
    // Print next day
    print_day(next_day(today));
    return 0;
}