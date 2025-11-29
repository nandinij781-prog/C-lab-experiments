// 2.	WAP to print the multiplication table of the number entered by the user. It should be in the correct formatting.   Num * 1 = Num 

#include <stdio.h>

int main() {
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", a, i, a * i);
    }

    return 0;
}
