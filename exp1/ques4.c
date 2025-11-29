// 4.	Write a C program to add two numbers, take number from user.

#include <stdio.h>

int main() {
    int number1, number2, sum;

    printf("Enter number 1: ");
    scanf("%d", &number1);

    printf("Enter number 2: ");
    scanf("%d", &number2);

    sum = number1 + number2;

    printf("Sum = %d\n", sum);

    return 0;
}
