// Armstrong number = Sum of its digits raised to the power of the number of digits in the number.
#include <stdio.h>

int main()
{
    int num, originalNum, remainder, power, n = 0, result = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0)
    {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        power = 1;
        for (int i = 0; i < n; i++)
        {
            power = power * remainder;
        }

        result += power;
        originalNum /= 10;
    }

    if (result == num)
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
