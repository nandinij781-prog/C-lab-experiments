// 1.	WAP to enter numbers till the user wants. At the end, it should display the count of positive, negative, and Zeroes entered.

#include <stdio.h>

int main() {
    int num, ch;
    int p = 0, n = 0, z = 0;  

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0)
            p++;
        else if (num < 0)
            n++;
        else
            z++;

        printf("Want to enter another number? (1 = Yes | 2 = No): ");
        scanf("%d", &ch);

    } while (ch == 1);

    printf("Total positive numbers: %d\n", p);
    printf("Total negative numbers: %d\n", n);
    printf("Total zero numbers: %d\n", z);

    return 0;
}
