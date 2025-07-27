#include<stdio.h>

float main() {
    float price[3];
    printf("enter items' prices: ");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    float a = price[0] + price[0] * 0.18;
    printf("Final cost of 1st item: %f", a);
    float b = price[1] + price[1] * 0.18;
    printf("\nFinal cost of 2nd item: %f", b);
    float c = price[2] + price[2] * 0.18;
    printf("\nFinal cost of 3rd item: %f", c);
}