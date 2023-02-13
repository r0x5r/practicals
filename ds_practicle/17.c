#include <stdio.h>

void selectionSort(int array[], int n)
{
    int i, j, minIndex, temp;

    for (i = 0; i < n - 1; i++)
    {
        // Find the minimum element in the unsorted portion of the array
        minIndex = i;
        for (j = i + 1; j < n; j++)
        {
            if (array[j] < array[minIndex])
            {
                minIndex = j;
            }
        }

        // Swap the minimum element with the element at the current position
        temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
    }
}

int main(void)
{
    int array[] = {3, 5, 1, 2, 4};
    int n = sizeof(array) / sizeof(array[0]);

    // Sort the array
    selectionSort(array, n);

    // Print the sorted array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
