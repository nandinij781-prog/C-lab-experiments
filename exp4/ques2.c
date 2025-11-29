// 2.	Declare a local variable inside a function and try to access it outside the function. Compare this with accessing the global variable from within the function.

#include <stdio.h>

int a = 5000; // Global variable

void greet();

int main() {
    int a = 20; 

    printf("Value of local 'a' in main: %d\n", a);
    greet(); 
    printf("Value of local 'a' after greet(): %d\n", a);

    return 0;
}

void greet() {
    int x = 50; 
    printf("Value of global 'a' in greet: %d\n", a);
    printf("Value of local 'x' in greet: %d\n", x);
}
