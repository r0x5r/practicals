#include <stdio.h>

// Function prototype
void swap(int a, int b);

int main()
{
    int x = 10, y = 20;

    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(x, y);
    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}

// Function to swap two values using call by value
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
