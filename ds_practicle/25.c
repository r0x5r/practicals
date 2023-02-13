#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            return i;

    return -1;
}

// Driver program to test above function
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 12;

    int index = linearSearch(arr, n, key);

    if (index == -1)
        printf("%d is not present in the array\n", key);
    else
        printf("%d is present at index %d\n", key, index);

    return 0;
}
