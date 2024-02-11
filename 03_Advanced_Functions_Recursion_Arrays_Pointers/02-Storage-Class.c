#include <stdio.h>

extern int reps = 0;

void f(void){
    static int called = 0;
    called++;
    printf("f called %d\n", called);
    reps = reps + called;
}

int main() {
    auto int i = 1;
    const int Limit = 10;
    for (i = 1; i <= Limit; i++){
        printf("i local = %d\t reps global = %d\n", i, reps);
        f();
    }
    return 0;
}