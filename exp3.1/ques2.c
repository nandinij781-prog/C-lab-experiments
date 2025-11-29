// 2.	WAP to compute the BMI Index of the person and print the BMI values as per the following ranges. You can use the following formula to compute BMI= weight(kgs)/Height(Mts)*Height(Mts).

#include <stdio.h>

int main() {
    double weight, height, bmi;

    printf("Enter weight (kg): ");
    if (scanf("%lf", &weight) != 1 || weight <= 0) {
        printf("Invalid weight\n");
        return 0;
    }

    printf("Enter height (m): ");
    if (scanf("%lf", &height) != 1 || height <= 0) {
        printf("Invalid height\n");
        return 0;
    }

    bmi = weight / (height * height);

    printf("BMI = %.2lf\n", bmi);

    if (bmi < 15.0)
        printf("Category: Starvation\n");
    else if (bmi <= 17.5)
        printf("Category: Anorexic\n");
    else if (bmi <= 18.5)
        printf("Category: Underweight\n");
    else if (bmi <= 24.9)
        printf("Category: Ideal\n");
    else if (bmi <= 25.9)
        printf("Category: Overweight\n");
    else if (bmi <= 39.9)
        printf("Category: Obese\n");
    else if (bmi <= 40.0)
        printf("Category: Morbidly Obese\n");
    else
        printf("Category: Extremely Obese\n");

    return 0;
}
