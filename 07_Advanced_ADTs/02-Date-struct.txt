#include <stdio.h>

// Define custom types
typedef enum all_month all_month;
typedef struct date date;

// Initiant month
enum all_month {
    january,
    february,
    march,
    april,
    mai,
    june,
    july,
    august,
    september,
    october,
    november,
    december
};

// To print month names
const char* month_names[] = {
    "January", "February", "March", "April", "May", "June", "July",
    "August", "September", "October", "November", "December"
};

// Initiate date
struct date
{
    all_month month;
    int day;
    int year;
};

// Print the current date
void print_date(date current_date){
    printf("%d %s %d\n", current_date.day, month_names[current_date.month], current_date.year);
}

// Get the next day
date next_day(date current_date){
    date new_date;
    // Check if last day of year
    if (current_date.month == 11 && current_date.day == 31)
    {   
        new_date.day = 1;
        new_date.month = 0;
        new_date.year = current_date.year+1;
        return(new_date);
    } 
    // Check if last day of february
    else if (current_date.month == 1 && current_date.day == 28)
    {
        new_date.day = 1;
        new_date.month = 2;
        new_date.year = current_date.year;
        return(new_date);
    }
    // Check if month with 31 days
    else if (current_date.month == 0 || current_date.month == 2 || current_date.month == 4 || current_date.month == 6 || current_date.month == 7 || current_date.month == 9)
    {   
        // Check if last day of month with 31 days
        if (current_date.day == 31)
        {
            new_date.day = 1;
            new_date.month = current_date.month+1;
            new_date.year = current_date.year;
            return(new_date);
        }
        // Increment day
        else {
            new_date.day = current_date.day+1;
            new_date.month = current_date.month;
            new_date.year = current_date.year;
            return(new_date);
        }     
    }
    
    else {
        // Check if last day from month with 30 days
        if (current_date.day == 30){
            new_date.day = 1;
            new_date.month = current_date.month+1;
            new_date.year = current_date.year;
            return(new_date);
        }
        // Increment day
        else {
            new_date.day = current_date.day+1;
            new_date.month = current_date.month;
            new_date.year = current_date.year;
            return(new_date);
        }
    }
    
}

int main(){
    date feb, mar, oct, dec;

    // Date in february
    feb.day = 28;
    feb.month = february;
    feb.year = 2023;

        // Date in march
    mar.day = 14;
    mar.month = march;
    mar.year = 2023;

    // Date in october
    oct.day = 31;
    oct.month = october;
    oct.year = 2023;

    // Date in december
    dec.day = 31;
    dec.month = december;
    dec.year = 2023;

    // Print date
    printf("The current date is: ");
    print_date(feb);
    printf("The next date is: ");
    print_date(next_day(feb));
    // Print date
    printf("The current date is: ");
    print_date(mar);
    printf("The next date is: ");
    print_date(next_day(mar));
    // Print date
    printf("The current date is: ");
    print_date(oct);
    printf("The next date is: ");
    print_date(next_day(oct));
    // Print date
    printf("The current date is: ");
    print_date(dec);
    printf("The next date is: ");
    print_date(next_day(dec));
    return 0;
}