//compounding
#include<stdio.h>
#include<math.h>
float main() {
    float P;
    printf("Enter Principle (P):");
    scanf("%f", &P);

    float r;
    printf("Enter Interest rate (r):");
    scanf("%f", &r);

    float a = 1 + r;

    float t;
    printf("Enter total time (t):");
    scanf("%f", &t);
    
    float b = pow(a,t);

    float A;
    printf("Total amount is: %f \n", A = P + b);

    printf("Total Tax: %f \n", A-P);

    return 0;

}
