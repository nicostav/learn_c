#include <stdio.h>
#include <ctype.h>

// Defines NDEBUG which ignores all asserts in program, needs to be before assert.h
#define NDEBUG
#include <assert.h>


int main(){
    // Check if assert is true if not quits program
    assert(0);
    printf("My program runs\n");
    return 0;
}