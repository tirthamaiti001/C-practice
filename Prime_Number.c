//Prime Number
#include <stdio.h>
// Function to check if a number is prime
int isPrime(int a) {
    if (a < 2) return 0;
    for(int i = 2; i <= a / 2; i++) {
        if(a % i == 0) {
            return 0;
        }
    }
    return 1;
}

// Function to return sum of all prime numbers in a range
int sumOfPrimes(int b, int c) {
    int sum = 0;
    for(int i = b; i <= c; i++) {
        if(isPrime(i)) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int b;
    printf("Enter 1st number: \n");
    scanf("%d", &b);
    int c;
    printf("Enter 2nd number: \n");
    scanf("%d", &c);

    // Validate input
    if (b > 0 && c > 0 && b < c) {
        int result = sumOfPrimes(b, c);
        printf("%d\n", result);
    } else {
        printf("Invalid input\n");
    }

    return 0;
}

