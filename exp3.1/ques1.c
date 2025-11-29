// 1.	WAP to take check if the triangle is valid or not. If the validity is established, do check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of the triangle as input from a user.

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three sides: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && b + c > a && c + a > b) {
        printf("Valid triangle\n");

        if (a == b && b == c)
            printf("Equilateral triangle\n");
        else if (a == b || b == c || c == a)
            printf("Isosceles triangle\n");
        else
            printf("Scalene triangle\n");

        if (a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b)
            printf("Right-angled triangle\n");
        else
            printf("Not right-angled triangle\n");
    }
    else {
        printf("Invalid triangle\n");
    }

    return 0;
}

