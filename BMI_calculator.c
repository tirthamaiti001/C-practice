//BMI_calculator
#include <stdio.h>
int main() {
    float weight;
    printf("Enter Weight(Kg): ");
    if (scanf("%f", &weight) != 1) {
        printf("Invalid input type!\n");
        return 1;
    }
    float height;
    printf("Enter Height(m): ");
    if (scanf("%f", &height) != 1) {
        printf("Invalid input type!\n");
        return 1;
    }

    // Validate weight range
    if (weight < 10.5 || weight > 300.0) {
        printf("Weight out of range!\n");
        return 1;
    }

    // Validate height range
    if (height < 0.90 || height > 2.50) {
        printf("Height out of range!\n");
        return 1;
    }

    // Calculate BMI
    float BMI = weight / (height * height);

    // Print BMI
    printf("BMI: %.2f\n", BMI);

    // Determine weight category
    if (BMI < 18.5) {
        printf("Category: Underweight\n");
    } else if (BMI < 25.0) {
        printf("Category: Normal weight\n");
    } else if (BMI < 30.0) {
        printf("Category: Overweight\n");
    } else {
        printf("Category: Obese\n");
    }

    return 0;

}
