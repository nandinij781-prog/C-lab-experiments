//1.	Declare a global variable outside all functions and use it inside various functions to understand its accessibility.

#include <stdio.h>

int a = 20;   

void gurd();

int main() {
    printf("Value of a in main before calling gurd(): %d\n", a);
    
    gurd();  
    
    printf("Value of a in main after calling gurd(): %d\n", a);
    
    return 0;
}

void gurd() {
    a = 50;  
    printf("Value of a in function gurd(): %d\n", a);
}
