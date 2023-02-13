#include <stdio.h>

// Recursive function to generate the nth number in the Fibonacci series
int fibonacci(int n)
{
    // Base case: if n is 0 or 1, the nth number is n
    if (n == 0 || n == 1)
        return n;

    // Recursive case: the nth number is the sum of the (n - 1)th and (n - 2)th numbers
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int num, i;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("The Fibonacci series is: ");
    for (i = 0; i < num; i++)
        printf("%d ", fibonacci(i));

    printf("\n");

    return 0;
}
