// 4.	Declare a static local variable inside a function. Observe how its value persists across function calls.

#include <stdio.h>

void greet(void);

int main() {
    greet();
    greet();
    greet();

    return 0;
}

void greet(void) {
    static int count = 0;  
    count++;
    printf("Count = %d\n", count);
}
