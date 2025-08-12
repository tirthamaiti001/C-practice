//Calculate the factorial of a number given by user.
#include<stdio.h>

int fact(int n);

int main() {
    printf("factorial is: %d", fact(6));
    return 0;
}

int fact(int n) {
    if(n == 0) {
        return 1;
    }
    int factNm1 = fact(n-1);
    int factN = factNm1 * n;
}