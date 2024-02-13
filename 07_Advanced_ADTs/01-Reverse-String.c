#include <stdio.h>
#include <ctype.h>
#define MAX_LEN 1000
#define EMPTY -1
#define FULL (MAX_LEN - 1)

typedef struct stack stack;

struct stack{
    char s[MAX_LEN]; int top;
};

// Clear stack
void reset(stack *stk){
    stk-> top = EMPTY;
}

// Add on top of stack
void push(char c, stack *stk){
    stk -> top++;
    stk -> s[stk -> top] = c;
}

char pop(stack *stk){
    return(stk-> s[stk-> top--]);
}

char top(const stack *stk){
    return(stk-> s[stk-> top]);
}

// Check if stack is empty
int is_empty(const stack *stk){
    return(stk-> top == EMPTY);
}

// Check if stack is full
int is_full(const stack *stk){
    return(stk-> top == FULL);
}

int main(){
    stack stack_of_char;
    char *str = "i am otto am i";
    char str_back[20];
    reset(&stack_of_char);
    int i = 0;
    printf("original is: %s\n", str);
    while (str[i] != '\0')
    {
        printf("%c\n", str[i]);
        push(str[i++], &stack_of_char);
    }
    i = 0;
    while (!is_empty(&stack_of_char) && i<20)
    {
        str_back[i++] = pop(&stack_of_char);
    }
    printf("reverse is : %s\n", str_back);
    printf("\n\n");    
}