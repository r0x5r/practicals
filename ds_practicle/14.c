#include <stdio.h>

// Recursive function to calculate the factorial of a given number
int factorial(int n)
{
    // Base case: if n is 0 or 1, the factorial is 1
    if (n == 0 || n == 1)
        return 1;

    // Recursive case: the factorial of n is n * the factorial of (n - 1)
    return n * factorial(n - 1);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The factorial of %d is %d\n", num, factorial(num));

    return 0;
}
