// Compound Interest
#include <stdio.h>
#include <math.h>

int main()
{
    float P, r, t, I, A;

    printf("Enter Principle (P): ");
    scanf("%f", &P);

    printf("Enter Interest rate (r): ");
    scanf("%f", &r);

    printf("Total time in year (t): ");
    scanf("%f", &t);

    r /= 100;

    A = P * pow((1 + r), t);
    I = A - P;

    printf("Total return is: %0.2f \n", A);
    printf("Total interest is: %0.2f \n", I);

    return 0;
}
