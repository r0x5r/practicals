#include <stdio.h>

// Function to perform binary search
int binary_search(int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 4;

    int index = binary_search(arr, n, x);

    if (index == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", index);

    return 0;
}
