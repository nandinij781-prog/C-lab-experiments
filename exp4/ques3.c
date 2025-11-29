// 3.	Declare variables within different code blocks (enclosed by curly braces) and test their accessibility within and outside those blocks.

#include <stdio.h>

int main() {
    int a = 20; 

    {
        int b = 150; 
        printf("Value of inner block variable b: %d\n", b);
        printf("Value of outer block variable a: %d\n", a);
    }

    printf("Value of variable a outside block: %d\n", a);

    return 0;
}
